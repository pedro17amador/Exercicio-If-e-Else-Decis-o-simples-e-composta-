#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1,divisao;
	
	printf("\tEsse algoritmo diz se o n�mero digitado � impar ou par.\n");
	printf("\nDigite um n�mero inteiro:");
	scanf("%d",&n1);
	
	divisao = n1%2;
	
	if (divisao == 0){
		printf("Esse n�mero � par!\n");
	}
	else{
		printf("Esse n�mero � impar!\n");
	}
	system("PAUSE");
	return 0;
}
