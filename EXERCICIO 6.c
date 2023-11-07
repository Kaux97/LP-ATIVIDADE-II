#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    int codigo;
    
    
    setlocale(LC_ALL,"portuguese");

    printf("----TABELA DE PRODUTOS----\n");
    printf("1--|||| Camiseta\n");
    printf("2--|||| Calça\n");
    printf("3--|||| Sapato\n");
    printf("\nDigite o código do Produto Desejado: \n");
    scanf("%d",&codigo);

system("clear || cls ");

switch (codigo){
    case 1:
    printf("Produto Escolhido: Camiseta\n");
    printf("Valor do produto: R$100\n");
    printf("MARCA: MAHALLO\n");
    break;
    case 2:
    printf("Produto Escolhido: Calça\n");
    printf("Valor do produto: R$130\n");
    printf("MARCA: SHEIN\n");
    break;
    case 3:
    printf("Produto Escolhido: Sapato\n");
    printf("Valor do produto: R$1500\n");
    printf("MARCA: NIKE AIRFORCE\n");
    break; 

}

return 0;
}
