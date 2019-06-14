#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese"); 
	system("COLOR D7");
	 
	int n1,n2,res;
	
	printf("\n\tAlgoritmo para calcular a soma de dois números.\n\n");
	
	printf("\aDígite o primeiro número:");
	scanf("%d",&n1);
	printf("\aDígite o segundo número:");
	scanf("%d",&n2);
	
	res = n1 + n2;
	
	printf("O resultado do calculo é: %d",res);
	return 0;
	
}  
