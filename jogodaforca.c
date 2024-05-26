#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale (LC_ALL, "");
    char palavra[30], palavraCerta[30], palavraSendoFeita[30];
    char letra;
    int randomN, tamanhoPalavra, erros, fix,i;
    i = 0;
    int uhhh = 0;
    srand (time(NULL));
    randomN = rand() % 5 + 1;
    erros = 6;
    switch (randomN) {
        case 1:
        strcpy(palavra, "gaiolas");
        strcpy(palavraCerta, "gaiolas");
        break;
        case 2:
        strcpy(palavra, "aluguel");
        strcpy(palavraCerta, "aluguel");
        break;
        case 3:
        strcpy(palavra, "abacaxi");
        strcpy(palavraCerta, "abacaxi");
        break;
        case 4:
        strcpy(palavra, "cama");
        strcpy(palavraCerta, "cama");
        break;
        case 5:
        strcpy(palavra, "nacional");
        strcpy(palavraCerta, "nacional");
        break;
    }
    tamanhoPalavra = strlen(palavra);
    switch (tamanhoPalavra) {
        case 1:
        strcpy(palavraSendoFeita, "_");
        break;
        case 2:
        strcpy(palavraSendoFeita, "__");
        break;
        case 3:
        strcpy(palavraSendoFeita, "___");
        break;
        case 4:
        strcpy(palavraSendoFeita, "____");
        break;
        case 5:
        strcpy(palavraSendoFeita, "_____");
        break;
        case 6:
        strcpy(palavraSendoFeita, "______");
        break;
        case 7:
        strcpy(palavraSendoFeita, "_______");
        break;
        case 8:
        strcpy(palavraSendoFeita, "________");
        break;
        case 9:
        strcpy(palavraSendoFeita, "_________");
        break;
        case 10:
        strcpy(palavraSendoFeita, "__________");
        break;
        case 11:
        strcpy(palavraSendoFeita, "___________");
        break;
        case 12:
        strcpy(palavraSendoFeita, "____________");
        break;
    }
//what actualy makes it work is all included in this while 
    while (strcmp(palavraSendoFeita, palavraCerta) != 0 && erros > 0) {
        //placing the info on the screen
        printf("%s\n", palavraSendoFeita);
        printf("Tentativas restantes: %d\n", erros);
        scanf("%c", &letra);
        while ( (fix = getchar()) != '\n' && fix != EOF ) {}

        //doing the operations to check for the character on the string and add it to the palavraSendoFeita var
        while (palavraCerta[i] != '\0') {
        if (palavraCerta[i] == letra ) {
            palavraSendoFeita[i] = letra;
            uhhh++;
        }
        i++;
        }
        //if no instance of letra was found, consumes one try
        if (uhhh == 0) {
        erros--;
        }
        uhhh = 0;
        i = 0;
        
    }
    printf("Sucesso");
    printf("%s\n",palavraCerta);
    
    return 0;
}
