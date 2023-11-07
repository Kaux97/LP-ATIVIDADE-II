#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL ,"portuguese");
    
    int codigo;
    int numero;
    int i;
    int resultado = 0;
    
    printf("Digite um n�mero positivo:\n ");
    scanf("%i" ,&numero); 
    printf(" \n");
    printf("(1)Verificar se � N�mero Primo \n");
    printf("(2)Encerrar Processo \n");
    printf("Digite um dos c�digos: \n");
    scanf("%i" ,&codigo);
    system("cls || clear");
    switch (codigo) {
        
        case 1:
        for (i = 2; i <= numero / 2; i++)
        {
            if (numero % i == 0)
            {
                resultado++;
                break;
            }
            
        }

        if (resultado == 0)
        {
            printf("Número Escolhido: %i \n" ,numero);
            printf("É um Número Primo \n");
        } else {
            printf("Número Escolhido: %i \n" ,numero);
            printf("Não é um Número Primo \n");
        }
            
        break;
        
        case 2:
            printf("Número Escolhido: %i \n" ,numero);
            
        break;

        default:
            printf("Opção inválida");
        break;
    }
        
    return 0;
}