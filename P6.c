#include <stdio.h>
//Italo Dias Nonato
//11711EEL031
int soma(int*,int*);
float divisao(float,int);
int main() {
	int vet[20]={0},n,i;
	float x;
	printf("Escolha a quantidade de numeros de 5 a 20: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	printf("vet[%d]=",i+1);
	scanf("%d",&vet[i]);getchar();
}
	
	int *primeiro=vet,*ultimo=vet+n-1;
	x=soma(primeiro,ultimo);
	divisao(x,n);
	printf("Media= %.1f",divisao(x,n));
	return 0;
}
int soma(int *ref, int *px) {
return (*px) + ((px == ref) ? 0 : soma(ref, px-1));
}
float divisao(float x,int n){
	return x/n;
}
