//João Pedro Silva Milagre
//11721EEL003

#include <stdio.h>

int main(){
	int *ps, cod[64], i, op;
	char str[256], ax;
	printf("Menu de opcoes:""\n\n1. Codificar""\n2. Descodificar""\n\nEscolha uma das opcoes: ");
	scanf("%d", &op);
	getchar();
	if(op==1){
		printf("\nDigite uma frase de ate 255 caracteres: ");
		gets(str);
		printf("\nA frase codificada sera: ");
		for(i=0; str[i]!='\0'; i+=4){
			ps = (int*)&str[i];
			if(str[i+4]!='\0'){
				printf("%d, ", *ps);
			}
			else{
				printf("%d", *ps);
			}
		}
		getchar();
	}
	else if(op==2){
		printf("\nDigite a sequencia numerica: ");
		for(i=0; i<64; i++){
			scanf("%d%c", &cod[i], &ax);
			if(ax!=',')
				break;
		}
		printf("\nA frase descodificada e: %s", &cod);
	}
	return 0;
}
