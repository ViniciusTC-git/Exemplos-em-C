#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,p;
	printf("Digite um numero");
	printf("\n1 - Par:");
	scanf("%d", &p);
	printf("\n2 - Impar:");
	scanf("%d", &i);
	
	if (p>i)
	{
		printf("O numero par e MAIOR que impar");
	}
	else
	{
		printf("O numero impar e MAIOR que par");
	}
	
	printf("\n");
	system("pause");
	return 0;
}
