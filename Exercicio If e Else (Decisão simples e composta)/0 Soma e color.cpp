#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese"); 
	system("COLOR D7");
	 
	int n1,n2,res;
	
	printf("\n\tAlgoritmo para calcular a soma de dois n�meros.\n\n");
	
	printf("\aD�gite o primeiro n�mero:");
	scanf("%d",&n1);
	printf("\aD�gite o segundo n�mero:");
	scanf("%d",&n2);
	
	res = n1 + n2;
	
	printf("O resultado do calculo �: %d",res);
	return 0;
	
}  
