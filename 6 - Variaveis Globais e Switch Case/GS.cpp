#include <iostream>

int numero;

int main() 
{
	printf("Menu\n\n");
	printf("1- funcao1\n\n");
	printf("2- funcao2\n\n");
	printf("\nEscolha a opcao desejada:");
	scanf("%d", &numero);
	switch (numero)
	{
		case 1:
			system("cls");
			printf("Ola\n");
			break;
		
		case 2:
			system("cls");
			printf("Oi\n");
			break;
		
		default:
			printf("Opcao invalida");	
						
	}
	system("pause");
	return 0;
}
