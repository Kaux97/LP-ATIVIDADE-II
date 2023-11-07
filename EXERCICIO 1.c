#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    int temperatura;
    
setlocale(LC_ALL,"portuguese");

printf("Informe a Temperatura atual : ");
scanf("%d",&temperatura);

if (temperatura >= 25){
    printf("O clima esta Ensolarado!!");
}else if(temperatura < 15){
    printf("O clima esta Chuvoso!!");
}else if(temperatura > 15 && temperatura < 25){
    printf("O clima esta Nublado!");
} 


    
    return 0;
}