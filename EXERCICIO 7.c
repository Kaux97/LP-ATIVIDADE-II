#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    int codigo;
    
    
    setlocale(LC_ALL,"portuguese");

    printf("----MENU----\n");
    printf("1--|||| NOVO JOGO\n");
    printf("2--|||| CARREGAR JOGO\n");
    printf("3--|||| CONFIGURAÇÕES\n");
    printf("\nDigite o código do Produto Desejado: \n");
    scanf("%d",&codigo);

system("clear || cls ");

switch (codigo){
    case 1:
    printf("\nInicializando novos Dados...\n");
    printf("INICIANDO NOVO JOGO...\n");
    break;
    case 2:
    printf("\nSLOT 1 SELECIONADO\n");
    printf("Carregando jogo...");
    break;
    case 3:
    printf("\n----CONFIGURAÇOES----\n");
    printf("MUSICA : OFF\n");
    printf("SENSIBILIDADE : 7\n");
    printf("CONTROLE : (padrão)\n");
    printf("Sair do Jogo\n");
    break; 
}

return 0;
}