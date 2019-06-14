#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1,n2;
	
	printf("\tAgoritimo que mostra a diferença de números entre eles.\n");
	
	printf("\nDigite um número:");
	scanf("%d",&n1);
	printf("Digite outro número:");
	scanf("%d",&n2);
	
	if(n1 > n2){
		printf("A diferença entre eles é:%d\n",n1-n2);
	}
	if(n1 < n2){
		printf("A diferença entre eles é:%d\n",n2-n1);
	}
	
	system("PAUSE");
	return 0;
}
