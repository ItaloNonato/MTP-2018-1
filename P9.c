//Nome: Italo Dias Nonato
//Matricula: 11711EEL031
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Dimensoes{
	float largura;
	float profundidade;
	float altura;
};
	typedef
struct meuProduto{
	char nome[64];
	float preco;
	struct Dimensoes d;	
}Produto;
Produto dados[2];
void cadastrar(int i){
			printf("Nome= ");
			fgets(dados[i].nome,64,stdin);
			printf("Preco= ");
			scanf("%f",&dados[i].preco);
			printf("Largura= ");
			scanf("%f",&dados[i].d.largura);
			printf("Profundidade= ");
			scanf("%f",&dados[i].d.profundidade);
			printf("Altura= ");
			scanf("%f",&dados[i].d.altura);
			printf("\nProduto %d cadastrado com sucesso\n\n",i+1);
}
void consultar(int i){
	if(strlen(dados[i].nome) == 0){
		printf("Produto nao cadastrado!\n\n");
}
	else
	printf("%s, R$ %.2f, L: %.1fm x P: %.2fm x A: %.2fm\n",dados[i].nome,
	dados[i].preco,dados[i].d.largura,dados[i].d.profundidade,dados[i].d.altura);
}
int main() {
	int n,m,i;
	Produto P;
	for(i=0;i<2;i++){
		strcpy(dados[i].nome, "");
	}
while(n!=3){
	printf("    MENU\n1.Cadastro\n2.Consulta\n3.Sair\nDigite uma opcao: ");
	scanf("%d",&n);getchar();
		if(n==1){
		printf("Produto 1 ou 2: ");
		scanf("%d",&m);getchar();
		if(m==1||m==2)
		cadastrar(m-1);
	}
		else if(n==2){
			printf("Produto 1 ou 2: ");
			scanf("%d",&m);getchar();
			if(m==1||m==2)
			consultar(m-1);
	}
}
	return 0;
}

