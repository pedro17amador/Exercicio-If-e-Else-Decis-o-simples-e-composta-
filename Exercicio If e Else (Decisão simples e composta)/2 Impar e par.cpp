#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1,divisao;
	
	printf("\tEsse algoritmo diz se o número digitado é impar ou par.\n");
	printf("\nDigite um número inteiro:");
	scanf("%d",&n1);
	
	divisao = n1%2;
	
	if (divisao == 0){
		printf("Esse número é par!\n");
	}
	else{
		printf("Esse número é impar!\n");
	}
	system("PAUSE");
	return 0;
}
