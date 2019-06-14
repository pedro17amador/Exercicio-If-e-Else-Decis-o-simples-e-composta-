#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2;
	
	printf("\tAlgoritmo compara dois números e mostra qual é o maior entre eles.\n");
	
	printf("\nDigite um número:");
	scanf("%f",&n1);
	printf("Digite outro número:");
	scanf("%f",&n2);
	
	if(n1 > n2){
		printf("O número maior é %.1f e o número menor é %.1f\n",n1,n2);
	}
	else{
		if(n1 < n2){
			printf("O número maior é %.1f e o número menor é %.1f\n",n2,n1);
		}
		else{
			if(n1 = n2){
				printf("Os números tem valores iguais\n");
			}
		}
	}
	
	
	system("PAUSE");
	return 0;
}
