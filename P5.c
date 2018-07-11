//João Pedro Silva Milagre
//11721EEL003

#include <stdio.h>

int main()
{	char str[256];
	char *p;
	int i, cont, txt[256], opcao;
	int *ps;
	do{
	do{printf("MENU: \n\nDigite 1 para criptografar \n\nDigite 2 para descriptografar \n\nDigite 3 para sair do programa \n\nEssa e a sua opcao: ");
	scanf("%d", &opcao);
	getchar();}while(opcao!=1 && opcao!=2 && opcao!=3);
	i = 0;
	switch(opcao)
	{	case 1:
			for(i=0; i<256; i++){ str[i] = '\0'; }
			printf("Digite um parametro de textual: ");
			fgets(str, 256, stdin);
			for(cont=0; str[cont] != '\0'; cont++);	
			ps = (int*)str;
			printf("\nCriptografamos sua frase: \n");
			for(i=0; i<cont; i++)	
			{	if(*(ps+i) != 0 )
				{	printf("%i ", *(ps+i));	}	} 
			break;
			
		case 2:
			printf("Nao se esqueca de quando encerrar sua sequencia, Digite enter 0 e precione enter novamente\n");
			p = (char*)txt;
			i=0; cont=0;
			printf("Digite seus numeros: \n");
			do
			{	scanf("%d", &cont);
	 			getchar();
				txt[i] = cont;
				i++;
			}while(cont != 0);
			p = (char*)&txt;
			printf("\nSua frase descriptografada: \n");
			for(i=0; i<sizeof(txt) && *(p+i) != 0; i++)
			{	printf("%c", *(p+i));		}
			break;

		default:
			break;
	}
	printf("\n\n");
	}while(opcao != 3);
	return 0;
}
