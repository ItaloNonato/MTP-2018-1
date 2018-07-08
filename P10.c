#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NCHAR_NOME 64
//Italo Dias Nonato
//11711EEL031
int sof;
long int ftell(FILE *stream);
char nomearquivo[NCHAR_NOME];
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
void escrita(Produto *p, int m)
{
	FILE *arq;
	int i = 0;
	printf("Nome do arquivo: ");
	scanf("%s", nomearquivo); getchar();
	if((arq = fopen(nomearquivo,"wb")) != NULL)
	{
		for(i = 0; i < m; i++)
		{
			fwrite(p[i].nome, sizeof(char), 64, arq);
			fwrite(&p[i].preco, sizeof(float), 1, arq);
			fwrite(&p[i].d.largura, sizeof(float), 1, arq);
			fwrite(&p[i].d.profundidade, sizeof(float), 1, arq);
			fwrite(&p[i].d.altura, sizeof(float), 1, arq);
		}
		printf("Produtos armazenados em disco com sucesso!\n\n");
		fclose(arq);
	}else
		printf("Erro: não foi possível abrir o arquivo\n\n");
}

void leitura(Produto *p, int *m)
{
	FILE *arquivo;
	int i;
	*m = 0;
	printf("Digite o nome do arquivo para ser lido: ");
	scanf("%s", nomearquivo);
	sof = sizeofFile(nomearquivo);
	if (sof > 0) {
		arquivo = fopen(nomearquivo, "rb");
		*m = sof/sizeof(Produto);
		printf("\n\nArquivo contem %d produto(s).Leitura realizada com sucesso!\n\n", *m);
		p = (Produto *) realloc(p, *m*sizeof(Produto));
		if(p!=NULL)
		{
			for(i = 0; i <*m; i++)
			{
				fread(&p[i].nome, sizeof(char), 64, arquivo);
				fread(&p[i].preco, sizeof(float), 1, arquivo);
				fread(&p[i].d.largura, sizeof(float), 1, arquivo);
				fread(&p[i].d.profundidade, sizeof(float), 1, arquivo);
				fread(&p[i].d.altura, sizeof(float), 1, arquivo);
			}
			
		}
		else {
			fprintf(stderr, ">>> Problema de realocacao da memoria!\n");
			*m = 0;
		}
	fclose(arquivo);
	}else
		fprintf(stderr, ">>> Carregamento nao efetuado!\n");
	
}

int sizeofFile(char nomearquivo[NCHAR_NOME])
{
	int sof = 0;
	FILE* arquivo = fopen(nomearquivo, "rb");
	if (arquivo) {
		fseek(arquivo, 0, SEEK_END);
		sof = ftell(arquivo);
		fclose(arquivo);
	} else {
		fprintf(stderr, ">>> Arquivo nao encontrado!\n");
		sof = -1;
	}
	return sof;
}
void cadastrar(Produto *p,int i){
			
			printf("Nome= ");
			scanf("%s", p[i].nome);
			printf("Preco= ");
			scanf("%f",&p[i].preco);
			printf("Largura= ");
			scanf("%f",&p[i].d.largura);
			printf("Profundidade= ");
			scanf("%f",&p[i].d.profundidade);
			printf("Altura= ");
			scanf("%f",&p[i].d.altura);
			printf("\nCadastrado com sucesso!\n\n");
}
void consultar(Produto *p,int i){
	int a,b,c=0;
	if(i==0|| strlen(p[i-1].nome)==0)
		printf("Nenhum produto cadastrado!\n\n");
		
	else
	{
		printf("Produtos em memoria: %d\n0. Voltar\n",i);
		for(a=0;a<i;a++)
			printf("%d. %s\n",a+1,p[a].nome);	
	printf("\nDigite uma opcao: ");
	scanf("%d",&b);getchar();
		if(b!=0){
			for(a=0;a<i;a++){
				if(b==a+1){
				printf("%s, R$ %.2f, L: %.1fm x P: %.2fm x A: %.2fm\n"
				,p[a].nome,p[a].preco,p[a].d.largura,p[a].d.profundidade,p[a].d.altura);
				c=1;		
			}
		}
			if(c==0)
			printf("\nProduto inexistente\n\n");
}	
}
}
int main() {
	
	int n=5,m=0,i;
	Produto *p;
	p = malloc(sizeof(Produto));
	for(i=0;i<3;i++){
		strcpy(p[i].nome, "");
	}
	while(n!=0){
	printf("Produtos em memoria: %d\n1.Consultar\n2.Cadastrar novo\n3.Carregar de arquivo para memoria"
			" (sobrescreve memoria)\n4.Salvar memoria em arquivo"
				" (sobrescreve arquivo)\n0.Encerra\nDigite uma opcao: ",m);
	scanf("%d",&n);getchar();
		switch(n){
			case 1:
				consultar(p,m);
				break;
			case 2:
				cadastrar(p,m);
				m++;
				break;
				
			case 3:
				leitura(p,&m);
				break;
				
			case 4:
				escrita(p,m);
				break;
}
}
	free(p);
	return 0;
}
