#include <stdio.h>
//Italo Dias Nonato
//11711EEL031
int main(){
	int estado=0,i=0;
	char bits[256];
	printf("Digite um numero binario: ");
	scanf("%s",bits);
	while(bits[i]!='\0'){
		if(estado==0 && bits[i]=='0')
		 estado=0;
		else
			if(estado==0 && bits[i]=='1')
			estado=1;
			else
				if(estado==1 && bits[i]=='0')
		 		estado=2;
		 		else
		 			if(estado==1 && bits[i]=='1')
		 			estado=0;
		 			else
		 				if(estado==2 && bits[i]=='0')
		 				estado=1;
		 				else
		 				estado=2;
		 i++;
	}
printf("\nNumero digitado: %s\n",bits);
if(estado==0)
printf("Multiplo de 3");
else
printf("Nao multiplo de 3");
return 0;	
		}

