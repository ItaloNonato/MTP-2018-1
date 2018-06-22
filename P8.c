 #include <stdio.h>
#include <stdlib.h>
#define K 100
//Italo Dias Nonato
//11711EEl031
void gera_numeros(float * vetor, int tam) {
int i;
for(i = 0; i < tam; i++)
vetor[i] = (float) rand()/(float) RAND_MAX + 0.5f;
}
float soma(float *inicio_vetor, float *fim_vetor) {
return (inicio_vetor == fim_vetor)? 0 : *inicio_vetor+soma(inicio_vetor+1, fim_vetor);
}
float produto(float *inicio_vetor, float *fim_vetor) {
return (inicio_vetor == fim_vetor)? 1 : *inicio_vetor*produto(inicio_vetor+1, fim_vetor);
}
int main(){
	srand(123456);
	int n;
	float vetor[K];
	gera_numeros(vetor,K);
	printf("			MENU\n"
	"1 - Somatorio\n2 - Produtorio\n\nDigite uma opcao: ");
	scanf("%d",&n); getchar();
	switch(n){
		case 1:
			printf("%f",soma(vetor,vetor+K));
			break;
		case 2:
			printf("%f",produto(vetor,vetor+K));
		break;	
	}
	return 0;	
}






