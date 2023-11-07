#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL,"portuguese");

    int numero,i;

    printf("Digite um número: ");
    scanf("%d",&numero);


    for(i=numero;i >= 0; i--)
    printf("%d\n",i);






return 0;


}



