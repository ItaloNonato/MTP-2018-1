#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Italo Dias Nonato
//11711EEL031
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
Produto dados[4];
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
			printf("\nCadastrado com sucesso\n\n");
}
void consultar(int i){
	int a,b;
	if(i==0|| strlen(dados[i-1].nome)==0)
		printf("Nenhum produto cadastrado!\n\n");
	else
	{
		printf("Produtos em memoria: %d\n0. Voltar\n",i);
		for(a=0;a<i;a++)
			printf("%d. %s\n",a+1,dados[a].nome);	
	printf("\nDigite uma opcao: ");
	scanf("%d",&b);getchar();
		if(b!=0)
		for(a=0;a<i;a++){
			if(b==a+1)
				printf("%s, R$ %.2f, L: %.1fm x P: %.2fm x A: %.2fm\n"
				,dados[a].nome,dados[a].preco,dados[a].d.largura,dados[a].d.profundidade,dados[a].d.altura);		
	}
}	
}
int main() {
	
	int n=5,m=0,i;
	
	Produto P;
	for(i=0;i<4;i++){
		strcpy(dados[i].nome, "");
	}
	while(n!=0){
	printf("Produtos em memoria: %d\n1.Consultar\n2.Cadastrar novo\n3.Carregar de arquivo para memoria"
			" (sobrescreve memoria)\n4.Salvar memoria em arquivo"
				" (sobrescreve arquivo)\n0.Encerra\nDigite uma opcao: ",m);
	scanf("%d",&n);getchar();
		switch(n){
			case 1:
				consultar(m);
				break;
			case 2:
				cadastrar(m);
				m++;
				break;
				
			case 3:
			break;
			case 4:
			break;
}
}
	return 0;
}
