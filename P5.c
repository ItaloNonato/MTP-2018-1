//Italo Dias Nonato
//11711EEL031
#include <stdio.h>
int main(){
	char s[256],c;
	int *pi=(int *)s,i,n,b,a[64];
	char *ps=(char *)a;
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
		for(b=0;b<=(i/4);b++)
			printf("%d ",pi[b]);
	}
if(n==2){
		printf("Digite um codigo numerico: ");
		for(i=0;i<64;i++){
			scanf("%d",&a[i]);
			if(a[i]==0)
			break;
		}
		printf("%s",ps);
	}
	return 0;
}
