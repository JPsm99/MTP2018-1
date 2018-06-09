// João Pedro Silva MIlagre
// 11721EEL003

#include <stdio.h>

void b_d (char b[]){
	int x=0, d=0;
	while(b[x]) {
		d = d*2 + (b[x]-'0');
		x++;
	}
	printf ("\nNumero digitado em decimal: %d", d);
}

void b_h (char b[]){
	int i=0, d=0;
	while(b[i]){
		d = d*2 + (b[i]-'0');
		i++;
	}
	printf ("\nNumero digitado em hexadecimal: %x", d);
}

int main (){
	int o, d, H, h, oc, cont;
	char b[256];
	printf(	"Conversor de base numerica:"
	"\n1) Binario p/ Decimal"
	"\n2) Binario p/ Hexadecimal"
	"\n3) Hexadecimal p/ Decimal"
	"\n4) Hexadecimal p/ Binario"
	"\n5) Decimal p/ Binario"
	"\n6) Decimal p/ Hexadecimal"
	"\n7) Octal p/ Decimal"
	"\n8) Decimal p/ Octal\n"
	"Escolha a opcao desejada: ");
	scanf ("%d", &o); 
	getchar();
	if(o==1){
		printf ("\nDigite o numero na base binaria: ");
		scanf ("%s", &b);
		getchar();
		b_d (b);
	}
	else if(o==2){
		printf ("\nDigite o numero na base binaria: ");
		scanf ("%s", &b);
		getchar();
		b_h (b);
	}
	else if(o==3){
		printf ("\nDigite o numero na base hexadecimal: ");
		scanf ("%x", &H);
		getchar();
		printf ("\nO numero digitado em decimal: %d", H);
	}
	else if(o==4){
		printf ("\nDigite o numero na base hexadecimal: ");
		scanf ("%x", &H);
		getchar();
		printf ("\nNumero auxiliar: %d", H);
		printf ("\n\nDigite o numero auxiliar printado acima: ");
		scanf ("%d", &d);
		getchar();
		itoa (d,b,2);
		printf ("\n%d em binario: %s\n", d,b);
	}
	else if(o==5){
		printf ("\nDigite o numero na base decimal: ");
		scanf ("%d", &d);
		getchar();
		itoa (d,b,2);
		printf ("\n%d em binario: %s\n", d,b);
	}
	else if(o==6){
		printf ("\nDigite o numero na base decimal:");
		scanf ("%d", &d);
		getchar();
		printf ("\nO numero digitado em hexadecimal: %x", d);
	}
	else if(o==7){
		printf ("\nDigite o numero na base octadecimal:");
		scanf ("%o", &oc);
		getchar();
		printf ("\nO numero digitado em decimal: %d", oc);
	}
	else if(o == 8){ 
		printf ("\nDigite o numero na base decimal:");
		scanf ("%d", &d);
		getchar();
		printf ("\nO numero digitado em octadecimal: %o", d);
	}
	else{
		printf ("\nOpcao invalida.");
	}
	return 0;
}
