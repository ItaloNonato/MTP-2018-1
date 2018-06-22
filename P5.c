#include <stdio.h>
//Italo Dias Nonato
//11711EEl031
int main(){
	char s[256],c;
	int *pi=(int *)s,i,n,a[64],b;
	printf("   Menu\n1.Codificar\n2.Decodificar\nEscolha uma opcao: ");
	scanf("%d",&n);
	getchar();
if(n==1){
	printf("Digite uma mensagem: ");
	for(i=0;i<255;i++){
		s[i]=getchar();
		if(s[i]==10)
			break;
	}
	s[i]='\0';
	if(i%4==0){
		for(b=0;b<(i/4)-1;b++)
			printf("%d, ",pi[b]);
		printf("%d",pi[b]);
		}
	else{
		for(b=0;b<(i/4);b++)
			printf("%d, ",pi[b]);
		printf("%d",pi[b]);
			}
	}
if(n==2){
		printf("Digite um codigo numerico: ");
		for(i=0; i<64; i++){
			scanf("%d%c",&a[i],&c);
			if(c!=',')
				break;
		}
		printf("%s",a);
	}	
	return 0;
}
