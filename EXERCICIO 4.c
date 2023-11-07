#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    int idade;
    
setlocale(LC_ALL,"portuguese");

printf("Informe sua idade: ");
scanf("%d",&idade);

if (idade >= 18){
    printf("ACESSO PERMITIDO! ");
}else{
    printf("ACESSO NEGADO!");
}

    
    return 0;
}