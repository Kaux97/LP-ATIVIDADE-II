#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    int codigo;
    float valorP,valordes;
    
    setlocale(LC_ALL,"portuguese");

    printf("----DADOS DA COMPRA----\n");
    printf("1--|||| DOMINGO\n");
    printf("2--|||| Segunda\n");
    printf("3--|||| Terça\n");
    printf("4--|||| Quarta\n");
    printf("5--|||| Quinta\n");
    printf("6--|||| Sexta\n");
    printf("7--|||| Sabado\n");
    printf("\nDigite o código do Dia da Semana: \n");
    scanf("%d",&codigo);
    printf("Digite o valor do Produto: ");
    scanf("%f",&valorP);

system("clear || cls ");

switch (codigo){
    case 1:
    valordes = valorP * 0.15;
    printf("Obrigado pela Compra!!\n");
    printf("O preço final do produto foi de: %.2f\n",valordes);
    printf("Foi realizado um desconto de 15%!!");
    break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    valordes = valorP * 0.10;
    printf("Obrigado pela Compra!!\n");
    printf("O preço final do produto foi de: %.2f\n",valordes);
    printf("Foi realizado um desconto de 10%!!");
    break;
    case 7:
    valordes = valorP * 0.15;
    printf("Obrigado pela Compra!!\n");
    printf("O preço final do produto foi de: %.2f\n",valordes);
    printf("Foi realizado um desconto de 15%!!");
    break;
}

        
    
    return 0;
}