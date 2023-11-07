#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    int codigo;
    
    
    setlocale(LC_ALL,"portuguese");

    printf("----ESCOLHA UM IDIOMA DA SUA PREFERÊNCIA----\n");
    printf("1--|||| Inglês\n");
    printf("2--|||| Espanhol\n");
    printf("3--|||| Francês\n");
    printf("\nDigite o código do Idioma Desejado: \n");
    scanf("%d",&codigo);

system("clear || cls ");

switch (codigo){
    case 1:
    printf("Welcome!!");
    break;
    case 2:
    printf("Bienvenido!!");
    break;
    case 3:
    printf("Accueillir!!");
    break; 

}

return 0;
}

