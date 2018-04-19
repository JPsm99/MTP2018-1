//João Pedro Silva Milagre
//11721EEL003

#include <stdio.h>

int main()
{
    int estado, x=0, r=0;
    char bits[256];
    do{
        printf("Insira uma sequencia binaria: ");
        scanf("%s", &bits);
        while (bits[x]!='\0')
        {
            if(bits[x]!='0' && bits[x]!='1')
                r++;
            x++;
        }
        if(r!=0)
            printf("\nO numero nao e binario. Insira novamente.\n");
    }
    while(r!=0);
	if (bits[0]=='0'){
        estado=0;
        x=1;
        while(bits[x]!='\0'){
            if(estado==0 && bits[x]=='0')
                estado=0;
            else if(estado==0 && bits[x]=='1')
                estado=1;
            else if(estado==1 && bits[x]=='0')
                estado=2;
            else if(estado==1 && bits[x]=='1')
                estado=0;
            else if(estado==2 && bits[x]=='0')
                estado=1;
            else if(estado==2 && bits[x]=='1')
                estado=2;
            x++;
        }
        printf("\nO estado de aceitacao final e: %d", estado);
		printf("\nI)O numero digitado foi: %s", bits);
        if (estado==0)
            printf("\nII)A sequencia binaria inserida e multipla de 3.");
        if (estado!=0)
            printf("\nII)A sequencia binaria inserida nao e multipla de 3.");
    }
    if(bits[0]=='1'){
        estado=1;
        x=1;
        while(bits[x]!='\0'){
            if (estado==0 && bits[x]=='0')
                estado=0;
            else if(estado==0 && bits[x]=='1')
                estado=1;
            else if(estado==1 && bits[x]=='0')
                estado=2;
            else if(estado==1 && bits[x]=='1')
                estado=0;
            else if(estado==2 && bits[x]=='0')
                estado=1;
            else if(estado==2 && bits[x]=='1')
                estado=2;
            x++;
        }
        printf("\nO estado de aceitacao final e: %d", estado);
		printf("\nI)O numero digitado foi: %s", bits);
        if (estado==0)
            printf("\nII)A sequencia binaria inserida e multipla de 3!");
        if (estado!=0)
            printf("\nII)A sequencia binaria inserida nao e multipla de 3.");
    }
    return 0;
}
