#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    int idade,laco = 0;
    char nome;

while (laco > 0 || laco < 10) // loop infinito.
	{

		printf("qual é seu nome?"); 
		scanf_s("%s", &nome);  
        printf("Quantos anos voce tem?");  
		scanf_s("%d", &idade);  

	

	}


    return 0;
}
int main(){

    int n1,n2,n3,n4, total;

        printf("Primeiro numero");  
		scanf_s("%d", &n1); 
        printf("Segundo numero");  
		scanf_s("%d", &n2); 
        printf("Terceiro numero");  
		scanf_s("%d", &n3);
        printf("Primeiro numero");  
		scanf_s("%d", &n4);

        total = (n1+n2+n3+n4)/4;

        printf("A média é: ");
       // printf();

	


    return 0;
}