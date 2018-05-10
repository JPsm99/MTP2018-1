//João Pedro Silva Milagre
//11721EEL003

#include <stdio.h>

void decimal_binario(int bin[], int dec){
	int x = 0, n = 0, i = 0, aux, nbin[256], cont = 0, v_aux[256];
	if(dec > 0){	
		for (i = 0; dec > 0; i++) {
        		bin[i] = dec % 2;
         		dec /=  2;
    		}	
		for (int x = i - 1; x >= 0; x--) printf("%d", bin[x]);
	}
	else if(dec < 0){
		aux = ((-dec) - 1);
		for (i = 0; aux > 1; i++) {
        		bin[i] = aux % 2;
         		aux /=  2;
         		if(aux == 1)
         		{	
			 	i++;
         			bin[i] = aux;
			}
    		}
    		i--;
		for(x = 0; x < 32; x++){
			if(x < (32 - (i+1))) nbin[x] = 0;
			else {
				bin[x] = bin[i];
				i--;
			}	
		}
		for(int w = 0; w < 32; w++){
			if(nbin[w] == 0) v_aux[w] = 1;
			else v_aux[w] = 0;
		}
		for(n = 0; n < 32; n++) printf("%d", v_aux[n]);
	}
}

int main(){
	int op, n, nnot, nand, nor, nxor, nr, nl;
	int bin[100], bin1[100], bin2[100], j, k;
	printf("Leia o menu para escolher sua opcao:\n""\n1. NOT""\n2. AND""\n3. OR""\n4. XOR""\n5. RIGHT SHIFT""\n6. LEFT SHIFT""\n\nOpcao escolhida: ");
	scanf("%d", &op);	
	if(op==1){
	printf("\nDigite um numero: ");
	scanf("%d", &n);
	getchar();
	nnot = ~n;
	printf("NOT %d (", n); decimal_binario(bin, n); printf(") :");
	printf(" %d (", nnot); decimal_binario(bin1, nnot);
	printf(")");
	getchar();
}
	else if(op==2){
		printf("\nDigite o primeiro numero: ");
		scanf("%d", &j);
		printf("Digite o segundo numero: ");
		scanf("%d", &k);
		getchar();
		nand = j & k;
		printf("%d (", j); decimal_binario(bin, j); printf(") AND ");
		printf("%d (", k); decimal_binario(bin1, k); printf(") : ");
		printf("%d (", nand); decimal_binario(bin2, nand); printf(")");
		getchar();
	}
	else if(op==3){
		printf("\nDigite o primeiro numero: ");
		scanf("%d", &j);
		printf("Digite o segundo numero: ");
		scanf("%d", &k);
		getchar();
		nor = j | k;
		printf("%d (", j); decimal_binario(bin, j); printf(") OR ");
		printf("%d (", k); decimal_binario(bin1, k); printf(") : ");
		printf("%d (", nor); decimal_binario(bin2, nor); printf(")");
		getchar();
	}
	else if(op==4){
		printf("\nDigite o primeiro numero: ");
		scanf("%d", &j);
		printf("Digite o segundo numero: ");
		scanf("%d", &k);
		getchar();
		nxor = j ^ k;
		printf("%d (", j); decimal_binario(bin, j); printf(") XOR ");
		printf("%d (", k); decimal_binario(bin1, k); printf(") : ");
		printf("%d (", nxor); decimal_binario(bin2, nxor); printf(")");
		getchar();
	}
	else if(op==5){
		printf("\nDigite o primeiro numero: ");
		scanf("%d", &j);
		printf("Digite o segundo numero: ");
		scanf("%d", &k);
		getchar();
		nr = j >> k;
		printf("%d (", j); decimal_binario(bin, j); printf(") >> ");
		printf("%d (", k); decimal_binario(bin1, k); printf(") : ");
		printf("%d (", nr); decimal_binario(bin2, nr); printf(")");
		getchar();
	}
	else if(op==6){
		printf("\nDigite o primeiro numero: ");
		scanf("%d", &j);
		printf("Digite o segundo numero: ");
		scanf("%d", &k);
		getchar();
		nl = j << k;
		printf("%d (", j); decimal_binario(bin, j); printf(") << ");
		printf("%d (", k); decimal_binario(bin1, k); printf(") : ");
		printf("%d (", nl); decimal_binario(bin2, nl); printf(")");
		getchar();
	}
	else{
		printf("\nDa proxima escolha uma opcao valida!!");
		getchar();
	}
	return 0;
}
