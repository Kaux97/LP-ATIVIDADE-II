#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    int n1,n2;
    char operacao;
    float soma,sub;
    
    
    setlocale(LC_ALL,"portuguese");

    printf("----ESCOLHA UMA OPERAÇÃO----\n");
    printf("Digite o primeiro Número: ");
    scanf("%d",&n1);
    printf("Digite o Segundo Número: ");
    scanf("%d",&n2);
    fflush(stdin);
    printf("Selecione uma operação (+/-) ");
    scanf("%c",&operacao);

system("clear || cls ");

switch (operacao){
    case '+':
    soma = n1 + n2;
    printf("Resultado da Operação: %.2f ",soma);
    break;
    case '-':
    sub = n1 - n2;
    printf("Resultado da Operação: %.2f ",sub);
    break;
     

}

return 0;
}