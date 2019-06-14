#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int sexo;
	float altura;
	
	puts("\tAlgoritmo que mostra o peso ideal masculino e feminino.\n");
	
	printf("Digite:\n[1]=Feminino\n[2]=Masculino\n");
	scanf("%d",&sexo);
	printf("Digite sua altura:");
	scanf("%f",&altura);
		
	if(sexo == 1){	
		printf("Seu peso ideal é:%.2f",62.1*altura-44.7);
	}
	else{
		if(sexo == 2){
			printf("Seu peso ideal é:%.2f",72.7*altura-58);
		}
		else{
			printf("Número invalido!\nDigite Novamente...");
		}
	}
	
	
	system("PAUSE");
	return 0;
}
