#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL ,"portuguese");
    
    int codigo;
    int numero;
    float milha;
    int metro ,centimetro;

    do
    {
        printf("Digite um número em Quilômetros: \n");
    scanf("%i" ,&numero);

            if (numero > 0)
            {
            
            printf("--Escolha uma Unidade de Medida para Transformar esse número-- \n");
            printf("(1)Milha \n");
            printf("(2)Centímetro \n");
            printf("(3)Metro \n");
            printf("Digite um dos códigos: \n");
            scanf("%i" ,&codigo);
            switch (codigo)
            {
            case 1:
                milha = 0.621 * numero;
                printf("Quilômetros para Milha: %.2f \n" ,milha);
                break;
            
            case 2:
                centimetro = numero * 100000;
                printf("Quilômetros para Centímetros: %i \n" ,centimetro);

                break;
            case 3:
                metro = numero * 1000;
                printf("Quilômetros para Metros: %i \n" ,metro);

                break;
            default:
                printf("Opção Inválida \n");
                break;
            }
            }
    } while (numero > 0);
    
    
    
    
    return 0;
}