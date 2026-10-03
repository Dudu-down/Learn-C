#include<stdio.h>
#define MAXLINE 1000 /* tamanho maximo de linha */

int getline (char line[], int max) /* retorna tamanho da linha */
int strindex (char source[], char searchfor[]); 

chat pattern[] = "ould";


int main() {
    char line [MAXLINE];
    int found = 0; /*Quantidade de buscas*/

    while (getline(line, MAXLINE)) {
        if (strindex(line, pattern) > 0) {
            printf("%s", line);
            found++;
        }
        return found;
    }

int getline (char s[], int lim) /*s como nome de variaveis, muitas vezes, indica string*/ {
    int c, i;

    i = 0;
/*Filho chora e a mae nao ve. passa instruçẽs e novas assinaturas de variaveis no proprio parametro do while e controla o fluxo e condiçais do estado delas: descresce lim, se for maior que 0, veja se c(que agora é o retorno de getchar()) é diferente de EOF que significa fim do texto, se for, veja se c é diferente de /n, e int pode receber char, devido a convergencia de caracteres e inteiros pela tabela asc*/
    while (--lim > 0 && (c=getchar()) != EOF && c != '\n') {  
        s[i++] = c;}
        if (c == '\n') {
            s[i++] = c;
        } 
        s[i] = '\0';
        return i;
    }


}