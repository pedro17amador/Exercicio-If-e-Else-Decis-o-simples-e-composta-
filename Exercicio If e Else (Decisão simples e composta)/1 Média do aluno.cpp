#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2,n3,n4,md;
	
	printf("\tAlgoritmo que calcula a m�dia de um aluno.\n");
		
	printf("\nDigite a primeira nota do aluno:");
	scanf("%f",&n1);
	printf("Digite a segunda nota do aluno:");
	scanf("%f",&n2);
	printf("Digite a terceira nota do aluno:");
	scanf("%f",&n3);
	printf("Digite a quarta nota do aluno:");
	scanf("%f",&n4);
	
	md = (n1+n2+n3+n4)/4;
	
	if(md >= 7){
		printf("A m�dia do aluno �: %.2f\n",md);
		printf("Aprovado");
	}
	else{
		printf("A m�dia do aluno �: %.2f \n", md);
		printf ("Reprovado\n");
	}
	
	system("PAUSE");
	return 0;
}
