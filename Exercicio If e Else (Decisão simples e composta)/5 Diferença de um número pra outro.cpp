#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1,n2;
	
	printf("\tAgoritimo que mostra a diferen�a de n�meros entre eles.\n");
	
	printf("\nDigite um n�mero:");
	scanf("%d",&n1);
	printf("Digite outro n�mero:");
	scanf("%d",&n2);
	
	if(n1 > n2){
		printf("A diferen�a entre eles �:%d\n",n1-n2);
	}
	if(n1 < n2){
		printf("A diferen�a entre eles �:%d\n",n2-n1);
	}
	
	system("PAUSE");
	return 0;
}
