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
		printf("Voc� atingiu a maioridade penal.\n");
	}
	else{
		printf("Voc� ainda n�o atingiu a maioridade penal.\n");
	}
	
	system("PAUSE");
	return 0;
}
