#include <iostream>
#include <conio.h>

int main()
{
	int x=10;

	int *pX = &x ;//*Px ponteiro , &x endereço da variavel. Outra forma e px = &x;
	
	


	printf("%d %d \n", pX, *pX);//*Px valor da variavel = 10, Px endereço da variavel
	
	
	getch();
	return 0;
}
