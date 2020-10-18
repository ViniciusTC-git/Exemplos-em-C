#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c;
	
	printf("Digite um numero para A:");
	scanf("%d",&a);
	printf("Digite um numero para B:");
	scanf("%d",&b);
	printf("Digite um numero para C:");
	scanf("%d",&c);
	
	if ((a>b) && (a>c))
	{
		printf("O a e maior");
	}

	else if ((b>a) && (b>c))
	{
		printf("O b e maior");
	}
	else
	{
		printf("O c e maior");
	} 
	printf("\n");
	system("pause");
	return 0;
}
