 #include <stdio.h>
 #include <stdlib.h>

 int main (int argc, char *argv[]) {
    /*FILE é ums Struct com typedef. é manipulada por funções da propria lib. O
    FILE mantem um muffer do arquivo com informações para as funções manipularem ele*/
    FILE *fp;
    int ch;
    int textDoc[100];
    int count = 0;

    if (argc < 2) {
        printf("argumento inexistente\n");
        exit(EXIT_FAILURE);
    }
    if ((fp = fopen(argv[1], "r")) == NULL) {
        printf ("can't open the file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while ((ch = fgetc(fp)) != EOF) {
        putc(ch, stdout);
        textDoc[count] = ch;
        count++;
    }
    for(int i = 0; textDoc[i] <= count; i++){
        printf("%d", textDoc[i]);
    }

    printf("\n");
    fclose(fp);
    return 0;
 }