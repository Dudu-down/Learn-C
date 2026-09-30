int getPattern (char s[], char pattern[]);

 /*return 1 = padrao encontrado
   return 0 = padrao nao encontrado*/
int getPattern (char s[], char pattern[]) {
    int i = 0;
    int j = 0;
    for (i=0; s[i] != '\0'; i++) {
            /*achou a correspondencia da primeira letra, agora um segundo for para percorrer o pattern em conjunto
           talvez posso fazer numa função separada de patternMach, talvez posso reformular e colocar uma variavel de contagem
           ou um array de int, onde cada match seguido conta nesse array, se erra, zera ele.*/
        if (s[i] == pattern[j]) {
            for(i = i+1, j = j+1; s[i] == pattern[j]; i++, j++ )     {
                if (pattern[j] == '\0') {
                    return 1;
                } 
                
            }                                                                                               
        }
    }
    return 0;
}