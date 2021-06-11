#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <iostream>


int main()
{
	setlocale(LC_ALL, ""); 

	int calculo, mat2, mat1, i, IMP, total; 
	int laco = 0, arquivo = 't'; 

	struct ponto2d
	{
		int x, y;
	};
	struct ponto_inicial
	{
	}; struct ponto2d comeco; 

	struct ponto_final
	{
	}; struct ponto2d fim;


	while ( laco > 0 || laco < 10 )
	{
		switch (laco)
		{
		case 1:
			printf("\nDigite o número do ponto X[1]: "); 
			scanf_s("%d", &comeco.x);
			printf("\nDigite o número do ponto Y[1]: ");
			scanf_s("%d", &comeco.y);
			break;
		case 2:
			printf("\nDigite o número do ponto X[2]: ");
			scanf_s("%d", &fim.x);
			printf("\nDigite o número do ponto Y[2]: ");
			scanf_s("%d", &fim.y);
			break;
		case 3:
			calculo = pow((comeco.x - fim.x), 2) + pow((comeco.y - fim.y), 2);
			calculo = sqrt(calculo); 
			printf_s("\nA distância entre os dois pontos, é: %d\n", calculo);
			system("pause");
			break;
		case 4:
			printf("Sair\n\n");
			exit;
			break;
		default: printf_s("\nErro! Tente novamente...\n");
			system("pause");
		}
	}
        for(int i=0 ; i<3 ; i++){
            for(int j=0 ; j<3 ; j++){
            }
    }
    if (IMP <= 1637.11);
    else if (IMP >= 1637.12 && IMP <= 2453.50) 
    {total = IMP * 0.075;} 
    else if (IMP >= 2453.51 && IMP <= 3271.38)
    {total = IMP * 0.15;}
    else if (IMP >= 3271.39 && IMP <= 4087.65)
    {total = IMP * 0.225;}
    else if (IMP >= 4087.66)
    {total = IMP * 0.275;}

    int lin, col, tabuleiro;
    
	for (lin = 0; lin < 8; lin++) 
	{
		for (col = 0; col < 8; col++) 
		{
			printf("  %d ", tabuleiro); 
		}
		printf("\n\n");
	}

	FILE* arq_texto; 
	errno_t err;

    printf_s("Nome do arquivo: ");
	printf_s(" %d ",arquivo);
	printf_s("Digite a frase: ");
    system("pause");
	return 0;
}
