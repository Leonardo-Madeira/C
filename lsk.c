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