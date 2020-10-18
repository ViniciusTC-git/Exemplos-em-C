#include <stdio.h>
#include <stdlib.h>


int num,a;

int main()
{	
do
{
		
	printf("Digite um numero:");
	scanf("%d", &num);
	if (num%2==0)
	{
	printf("\nPar");
	printf("\n1 - Novo calculo\n");
	printf("\n2 - Sair");
	printf("\nDigite a opcao desejada:");
	scanf("%d", &a);
	system("cls");
	}
	else
	{
	printf("\nImpar");
	printf("\n1 - Novo calculo\n");
	printf("\n2 - Sair");
	printf("\nDigite a opcao desejada:");
	scanf("%d", &a);
	system("cls");	
	}
	
	}while (a!=2); 
	
	return 0;
}
