//João Pedro Silva Milagre
//11721EEL003

#include <stdio.h>
#include <stdlib.h>

void gera_num(float *vet, int x)
{
	int i;
	float n;
	for(i = 0; i < x; i++)
	vet[i] = (float) rand()/(float) RAND_MAX + 0.5f;
}

float reduz(float *i_vet,float *f_vet, float (*funcao)(float, float))
{
	return (i_vet==f_vet)? 1 : (*funcao)(*i_vet, reduz(i_vet+1,f_vet,funcao));
}

float soma(float n, float n1)
{
	return n+n1;
}

float produto(float n, float n1)
{
	return 	n*n1;
}

int main(int argc, char ** argv)
{
	srand(123456);
	int op = 0;
	float vet[99];
	printf("Menu de opcoes: ");
	printf("\n\n1- Soma \n2- Produto\n");
	printf("\nDigite sua opcao: ");
	scanf("%d", &op);
	getchar();
	gera_num(vet,99);
	switch(op)
	{
		case 1:
			printf("\nSoma: %f\n", reduz(vet, vet+99, soma)-1);
			return 0;
		case 2:
			printf("\nProdutorio: %f\n", reduz(vet, vet+99, produto));
			return 0;
	}
	
	return 0;
	
}
