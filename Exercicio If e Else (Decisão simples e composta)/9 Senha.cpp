#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int senha;
	
	puts("\tAlgoritmo que verifica senha.\n");
	
	printf("Digite uma senha de 5 digitos:");
	scanf("%d",&senha);
	
	if(senha == 12345){
		printf("Acesso permitido.\n");
	}
	else{
		printf("Senha invalida.\n");
	}
	
	system("PAUSE");
	return 0;
}
