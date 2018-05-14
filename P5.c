#include <stdio.h>
//Italo Dias Nonato
//11711EEL031
void decodificar(int *pi, char *pc)
{
    int i = 0;
    int j;
    union X {int i[64]; char s[256];}chave;

    for (i=0;i<64;i++)
    {
        chave.i[i] = pi[i];
    }
    i = -1;
    do
    {
        i++;
        pc[i] = chave.s[i];
    }while(pc[i] != '\0');
}
int codificar(int *pi, char *pc)
{
    int i = 0;
    int j;
    union X {int i[64]; char s[256];}chave;
    for (i=0;i<255;i++)
    {
        chave.s[i] = pc[i];
    }
    for (i=0;pc[i]!='\0';j=i++);
    i = i/4;
    for (j=0;j<=i;j++)
    {
        pi[j] =chave.i[j];
    }
    return(i);
}
int main()
{
    char frase[256];
    int decode[64];
    int aux;
    int i,n;
    printf("   Menu\n1.Codificar\n2.Decodificar\nEscolha uma opcao: ");
	scanf("%d",&n);
	getchar();
    if(n==1){
		printf("Digite uma mensagem: ");
		for(i=0;i<255;i++){
			frase[i]=getchar();
			if(frase[i]==10)
			break;
	}
		frase[i]='\0';
		aux = codificar(decode,frase);
   		for (i=0;i<=aux;i++)
        	printf("%d, ",decode[i]);
	}
	if(n==2){
	printf("Digite a quantidade de codigos numerico: ");
	scanf("%d",&n);
	getchar();	
	printf("Digite os codigos numericos: ");
	for(i=0;i<n;i++)
	scanf("%d",&decode[i]);
    decodificar(decode,frase);
    printf("%s",frase);
}
    return 0;
}
