#include <iostream>

int numero,resposta;
int contador=0;

int main() 
{
do	
{
	
	system("cls");
	printf("Digite o numero da tabuada:");
	scanf("%d", &numero);
	
	for(contador=3;contador>=0;contador--)
	{
		printf("%d x %d = %d \n",numero,contador,numero*contador);
	}
	printf("\n1 - Novo calculo\n");
	printf("\n2 - Sair");
	printf("\nDigite a opcao desejada:");
	scanf("%d", &resposta);
}while(resposta != 2);
	system("pause");
	return 0;
}
