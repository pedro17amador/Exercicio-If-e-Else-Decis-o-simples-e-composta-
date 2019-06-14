#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int ano,resultado;
	
	puts("\tAlgoritmo que verifica sua idade.\n");
	
	printf("Digite seu ano de nascimento:\n");
	scanf("%d",&ano);
	
	resultado = 2019-ano;
	
	if(resultado >= 18){
		printf("Você atingiu a maioridade penal.\n");
	}
	else{
		printf("Você ainda não atingiu a maioridade penal.\n");
	}
	
	system("PAUSE");
	return 0;
}
