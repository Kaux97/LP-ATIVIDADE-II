#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL ,"portuguese");
    
    int codigo;
    int codigoCerto = 1234;
    
    do {
        printf("Informe seu código de acesso: ");
        scanf("%i" ,&codigo);
        
        if (codigo == 1234){
            printf("Acesso Permitido \n");
        } else {
            printf("Acesso Negado \n");
        }
    } while (codigo != codigoCerto);
    
    
    return 0;
}