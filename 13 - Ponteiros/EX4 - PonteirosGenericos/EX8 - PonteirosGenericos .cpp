#include <iostream>
#include <conio.h>

int main()
{
	void *pp;
	int a = 10;
	
	pp = &a;
	
	printf("\nValor %d e Endere�o %d",*(int*)pp,pp);//Endere�o da variavel a

	
	getch();
	return 0;

	

	
	
}
