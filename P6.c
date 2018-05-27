//João Pedro Silva Milagre
//11721EEL003

#include <stdio.h>

int soma (int vet[])
{
    int i, x=0;
    for(i=0;i<20;i++)
    {
        x = x + vet[i];
    }
    return x;
}

float media (int a, int b)
{
    float m = b/a;
    return m;
}

void main()
{
    int i, a, vet[20];
    float n;
    printf("Informe a quantidade de valores que serao atribuidos(entre 5 e 20): ");
	scanf("%d", &a);
    for(i=0;i<20;i++)
    {
        vet[i]=0;
    }
    i=getchar();
    printf("\nDigite os numeros: \n");
    for(i=0;i<a;i++)
    {
        scanf("%d", &vet[i]);
    }
    n=media(a,soma(vet));
    printf("%.2f", media(a,soma(vet)));
}
