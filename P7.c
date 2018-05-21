#include <stdio.h>
//Italo Dias Nonato
//11711EEL031
int A(int,int);
int main() {
int m,n;
printf("Digite o valor de:\nm= ");
scanf("%d",&m);
printf("n= ");
scanf("%d",&n);
printf("Resultado: %d",A(m,n));
return 0;
}
int A(int m,int n) {
if(m==0) return n+1;
else if(m>0&&n==0) return A(m-1,1);
else if(m>0&&n>0) return A(m-1,A(m,n-1));
}
