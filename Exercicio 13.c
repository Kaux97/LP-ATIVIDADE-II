#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main() {
    setlocale(LC_ALL ,"portuguese");
    
    int numero1;
    int numero2;
    int maior;
    int menor;


    printf("Digite o 1º número: ");
    scanf("%d" ,&numero1);
    
    printf("Digite o 2º número: ");
    scanf("%d" ,&numero2);
    
    system("cls || clear");
    
    if(numero1 > numero2){
        maior = numero1;
        menor = numero2;
    }else {
        maior = numero2;
        menor = numero1;
    }
    
    printf("Maior Número: %i \n" ,maior);
    printf("Menor Número:  %i \n" ,menor);
    
    return 0;
}