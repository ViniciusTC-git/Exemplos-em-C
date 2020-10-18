#include <iostream>



int main() 
{
	int numero;
	printf("Digite sua idade:");
	scanf("%d", &numero);
	if (numero<18)
	{
		printf("Menor de idade\n");
		
	}
	if (numero>=18)
	{
		printf("Maior de idade\n");
	}
	system("pause");
	return 0;
}
