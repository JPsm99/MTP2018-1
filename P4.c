//João Pedro Silva Milagre
//11721EEL003

//João Pedro Silva Milagre
//11721EEL003

#include<stdio.h>

int main(){
	
	char numero[256];
	scanf("%s", numero);
	int i=0, cum=0;
	
	while(numero[i]!='\0')
	{
		if(numero[i]>=48&&numero[i]<=57)
			cum=cum*10+numero[i]-48;
		i++;
	}
	
	printf("%d", cum);
	
	return 0;
}
