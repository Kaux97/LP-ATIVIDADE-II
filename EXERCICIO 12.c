#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    
    setlocale(LC_ALL,"portuguese");

int qtdnotas,i,cont = 0;
float nota,soma = 0,media;

    printf("Digite a quantidade de notas:");
    scanf("%d",&qtdnotas);

    for(i=0;i < qtdnotas; i++){
    printf("Digite uma nota: ");
    scanf("%f",&nota);

    soma += nota;
    cont++;
    }

    media = soma/cont;


printf("Média das Notas %.2f", media);
    
    
    
    return 0;
}