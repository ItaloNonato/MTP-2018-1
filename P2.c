#include <stdio.h>
//Italo Dias Nonato
//11711EEL031
unsigned long long int bin_dec(char bin[]) {
int i = 0; 
unsigned long long int dec = 0;
while(bin[i]!='\0') {
	dec =dec*2+(bin[i] - '0');
i++;
}
return dec;
}
void dec_bin(unsigned int bits, int nb) {
  if(nb != 0) {
dec_bin(bits/2, nb-1);
  } 
printf("%d",(bits%2));
}
int main(){
	int n=0,nb,bits;
	char bin[256];
	while(n!=9){
    printf("\n\n       Menu\n"
"1:Binario--->Decimal\n2:Binario--->Hexadecimal"
"\n3:Hexadecimal--->Decimal\n4:Hexadecimal--->Binario"
"\n5:Decimal--->Binario\n6:Decimal--->Hexadecimal"
"\n7:Octal--->Decimal\n8:Decimal--->Octal\n9:Sair\n\nEscolha uma opcao: ");
scanf("%d",&n);
      switch(n){
    	case 1:
    		printf("Binario: ");
    		scanf("%s",&bin); getchar();
    		printf("Decimal: %d",bin_dec(bin));
    		break;
    	case 2:
    		printf("Binario: ");
            scanf("%s",&bin); getchar();
            printf("Hexadecimal: %x",bin_dec(bin));
    		break;
    	case 3:
    		printf("Hexadecimal: ");
    		scanf("%x",&bits); getchar();
    		printf("Decimal: %d",bits);
    		break;
    	case 4:
    	    printf("Hexadecimal: ");
            scanf("%x",&bits); getchar();
            for(nb = 0; bits >= (1 << nb); nb++);
    		printf("Binario: ");
    		dec_bin(bits,nb);
    		break;
    	case 5:
    		printf("Decimal: ");
    		scanf("%d",&bits); getchar();
    		for(nb = 0; bits >= (1 << nb); nb++);
    		printf("Binario: ");
    		dec_bin(bits,nb);	
			break;	
    	case 6:
    		printf("Decimal: ");
    		scanf("%d",&bits); getchar();
    		printf("Hexadecimal: %x",bits);
    		break;
    	case 7:
    		printf("Octal: ");
    		scanf("%o",&bits); getchar();
    		printf("Decimal: %d",bits);
    		break;
    	case 8:
    		printf("Decimal: ");
    		scanf("%d",&bits); getchar();
    		printf("Octal: %o",bits);
    		break;
}
}
return 0;	
		}

