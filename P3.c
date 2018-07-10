//Italo Dias Nonato
//11711EEL031
#include<stdio.h>

void bin(unsigned int num)
{
	int i=0, j=31;

	char bits1[33];
	
	for(i=0; i<32; i++){
		if(num%2==0)
			bits1[j]=0;
		else
			bits1[j]=1;	
		num=num/2;
		j--;
	}
	
	for(i=0; i<32; i++)
		printf("%i", bits1[i]);
}

int main(){
	
	int op, arg1, arg2;
	char bin1[32];
	
	printf("Calculadora Bitwase\n1. NOT\n2. AND\n3. OR\n4. XOR\n5. Right Shift\n6. Left Shift\nOpcao Escolhida: ");
	
	scanf("%d", &op); getchar();
	scanf("%d", &arg1); getchar();
	
	if(op!=1){
		scanf("%d", &arg2); getchar();
	}	
	
	switch(op)
	{
		case 1:
			printf("NOT %d (", arg1); 
			bin(arg1);
			int NOT = ~arg1;
			printf("): %d (", NOT);
			bin(NOT);
			printf(")");
			break;
		case 2:
			printf("%d (", arg1); 
			bin(arg1);
			printf(") AND %d (", arg2);
			bin(arg2);
			int AND = arg1&arg2;
			printf("): %d (", AND);
			bin(AND);
			printf(")");
			break;
		case 3:
			printf("%d (", arg1); 
			bin(arg1);
			printf(") OR %d (", arg2);
			bin(arg2);
			int OR = arg1|arg2;
			printf("): %d (", OR);
			bin(OR);
			printf(")");
			break;
		case 4:
			printf("%d (", arg1); 
			bin(arg1);
			printf(") XOR %d (", arg2);
			bin(arg2);
			int XOR = arg1^arg2;
			printf("): %d (", XOR);
			bin(XOR);
			printf(")");
			break;
		case 5:
			printf("%d (", arg1); 
			bin(arg1);
			printf(") >> %d (", arg2);
			bin(arg2);
			int RIGHT = arg1>>arg2;
			printf("): %d (", RIGHT);
			bin(RIGHT);
			printf(")");
			break;
		case 6:
			printf("%d (", arg1); 
			bin(arg1);
			printf(") << %d (", arg2);
			bin(arg2);
			int LEFT = arg1<<arg2;
			printf("): %d (", LEFT);
			bin(LEFT);
			printf(")");
			break;
		default:
			printf("Erro\n");
	}
	return 0;
}
