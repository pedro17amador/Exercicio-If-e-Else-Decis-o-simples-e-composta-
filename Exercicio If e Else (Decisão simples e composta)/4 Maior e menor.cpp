#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2;
	
	printf("\tAlgoritmo compara dois n�meros e mostra qual � o maior entre eles.\n");
	
	printf("\nDigite um n�mero:");
	scanf("%f",&n1);
	printf("Digite outro n�mero:");
	scanf("%f",&n2);
	
	if(n1 > n2){
		printf("O n�mero maior � %.1f e o n�mero menor � %.1f\n",n1,n2);
	}
	else{
		if(n1 < n2){
			printf("O n�mero maior � %.1f e o n�mero menor � %.1f\n",n2,n1);
		}
		else{
			if(n1 = n2){
				printf("Os n�meros tem valores iguais\n");
			}
		}
	}
	
	
	system("PAUSE");
	return 0;
}
