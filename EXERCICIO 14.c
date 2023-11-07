#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL ,"portuguese");
    
    int numero;
    float mediaPares = 0 ,mediaImpares = 0;
    int contadorPar= 0 ,contadorImpar = 0;
    int somaPares = 0 ,somaImpares = 0;
    
        do {
            printf("Digite um número: ");
            scanf("%d" ,&numero);

            if (numero > 0)
            {
            if(numero % 2 == 0){
                
            somaPares += numero;
            contadorPar++;
            
            }else{
            somaImpares += numero;
            contadorImpar++;
            }
    
            
         }            
        } while (numero > 0);

        system("cls || clear");
        
    //exibir
    mediaPares = somaPares/ (float) contadorPar;
    mediaImpares = somaImpares/ (float) contadorImpar;
    
    printf("Números Pares %i \n" ,contadorPar);
    printf("Números Ímpares %i \n" ,contadorImpar);
    printf("Média dos Pares: %.1f \n" ,mediaPares);
    printf("Média dos Ímpares: %.1f \n" ,mediaImpares);
    
    return 0;
}