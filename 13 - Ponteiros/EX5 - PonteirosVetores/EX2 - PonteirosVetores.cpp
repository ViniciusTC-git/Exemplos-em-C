#include <iostream> 
#include <conio.h> 

int main()
{
	int *pvet[2];
	 
	int x = 10, y[2]= {20,30};
	
	pvet[0] = &x;
	pvet[1] = y;
	
	
	printf("pvet[0]: %d\n", pvet[0]);//Endereço de x.
	printf("\npvet[1]: %d\n", pvet[1]);//Endereço de y[0]=20.
	
	printf("\npvet[0]: %d\n", *pvet[0]);//Valor de x.
	printf("\npvet[1][1]: %d\n", pvet[1][1]);//Valor de y[1]=30.Para acessar endereço de 20 ou 30 basta colocar &
	
	getch();
	return 0;
	
}
