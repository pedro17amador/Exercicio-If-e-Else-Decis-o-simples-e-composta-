#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2,soma;
	
	printf("\tAlgoritmo que apresenta se a soma dos dois números e diz se é maior, igual ou menor que 25.\n");
		
	printf("\nDigite um valor:");
	scanf("%f",&n1);
	printf("Digite outro valor:");
	scanf("%f",&n2);
	
	soma = n1+n2;
	
	if(soma >25){
		printf("A soma dos números é maior que 25\n");
	}
	else{
		if(soma == 25){
			printf("A soma dos números é igual a 25\n");	
		}
		else{
			printf("A soma dos números é menor que 25\n");
		}
	}	
	
	system("PAUSE");
	return 0;
}
