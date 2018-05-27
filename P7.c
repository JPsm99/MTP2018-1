//João Pedro Silva Milagre
//11721EEL003

#include <stdio.h>
long long int A(int, int);
int main(){
	printf("                                           Funcao de Ackermann\n\n");
	int n, m;
	printf("Digite o valor de m: ");
	scanf("%d", &m);
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	printf("\nO resultado sera: %lld\n", A(m,n));
	return 0;
}
long long int A(int m, int n){
	if(m == 0) return n + 1;
	if(m > 0 & n == 0) return A(m - 1,1);
	if(m > 0 & n > 0) return A(m - 1,A(m,n - 1));
}
