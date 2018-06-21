#include <stdio.h>
//Italo Dias Nonato
//11711EEL031
int main(){
	int i=0,cum=0;
	char n[256];
	printf("Digite a sequencia de caracteres: ");
	scanf("%s",n); getchar();
	while(n[i]!='\0'){
		if(n[i]=='0'||n[i]=='1'||n[i]=='2'||n[i]=='3'||n[i]=='4'||n[i]=='5'||n[i]=='6'||n[i]=='7'||n[i]=='8'||n[i]=='9')
		cum=cum*10+n[i]-'0';
		i++;
	}
	printf("%d",cum);
	return 0;
}
