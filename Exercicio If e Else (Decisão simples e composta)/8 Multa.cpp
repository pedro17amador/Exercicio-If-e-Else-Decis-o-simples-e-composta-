#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float multa,qpescado;
	
	puts("\tAlgoritmo que calcula multa.\n");
	
	printf("Quantidade em quilos de peixe pescado:\n");
	scanf("%f",&qpescado);
	
	multa = (qpescado-50)*4;
	
	if(qpescado > 50){
		printf("Valor da multa: R$%.2f\n",multa);
	}
	else{
		printf("Quantidade de quilos de peixe permitido.\n");
	}
	
	system("PAUSE");
	return 0;
}
