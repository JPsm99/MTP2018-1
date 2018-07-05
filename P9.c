//João Pedro Silva Milagre
//11721EEL003

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Dimensoes{
    float largura, profundidade, altura;
};
struct Produto{
    char nome[64];
    float preco;
    struct Dimensoes dimensoes;
    int st;
};
void main (){
    struct Produto prod[2];
    prod[0].st=0, prod[1].st=0;
    int a, b;
    char l;
    printf("                                                    Bem vindo!!\n\n");
    menu:
    printf("1 - Cadastro\n2 - Consulta\n3 - Sair\n");
    printf("\nEscolha sua opcao: ");
    scanf("%d", &a);
    switch(a){
    case 1:
        printf("\n\nDigite a posicao(codigo) do produto: ");
		scanf("%d",&b);
        l=getchar();
        printf("\nDigite o nome do produto: ");
		scanf("%s",&(prod[b-1].nome));
        printf("Digite o valor do produto: ");
		scanf("%f",&(prod[b-1].preco));
		printf("Digite a largura do produto: ");
        scanf("%f",&(prod[b-1].dimensoes.largura));
        printf("Digite a profundidade do produto: ");
        scanf("%f",&(prod[b-1].dimensoes.profundidade));
        printf("Digite a altura do produto: ");
        scanf("%f",&(prod[b-1].dimensoes.altura));
        printf("\nProduto %d cadastrado com sucesso\n\n\n",b);
        prod[b-1].st++;
        goto menu;
        break;
    case 2:
        printf("\nDigite o codigo do produto cadastrado: ");
		scanf("%d",&b);
        if(prod[b-1].st==0){printf("Produto nao cadastrado!\n\n\n");}
        else{
        printf("\n\nProduto encontrado:\n");
		printf("%s, ",prod[b-1].nome);
        printf("R$ %.2f, ",(prod[b-1].preco));
        printf("L: %.2fm x ",(prod[b-1].dimensoes.largura));
        printf("P: %.2fm x ",(prod[b-1].dimensoes.profundidade));
        printf("A: %.2fm\n\n\n",(prod[b-1].dimensoes.altura));
        }
        goto menu;
        break;
    case 3:
    	return 0;
    }
}
