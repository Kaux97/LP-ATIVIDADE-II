#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    float nota;
    
setlocale(LC_ALL,"portuguese");

printf("Informe sua Nota: ");
scanf("%f",&nota);

if (nota >= 9){
    printf("Excelente!!");
}else if(nota >= 7 && nota <= 8.9){
    printf("Bom!!");
}else if(nota >= 5 && nota <= 6.9){
    printf("Razoável");
}else if (nota < 5){
    printf("Insuficiente!");
} 


    
    return 0;
}



