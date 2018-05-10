//João Pedro Silva Milagre
//11721EEL003

#include <stdio.h>

int main (){
	int r[256], c = 0, i, j;
	char num[256];
	printf("Digite o numero: ");
	scanf("%s", &num);
	for(i = 0; num[i] != '\0'; i++){
		if(num[i] >= 48 && num[i] <= 57){
			r[c] = num[i] - 48;
			c++;
		}
	}
	printf("\nResultado: ");
	for(j = 0; j < c; j++)
		printf("%d", r[j]);
	return 0;
}
