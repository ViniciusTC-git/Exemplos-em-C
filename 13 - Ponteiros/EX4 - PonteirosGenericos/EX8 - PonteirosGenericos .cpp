#include <iostream>
#include <conio.h>

int main()
{
	void *pp;
	int a = 10;
	
	pp = &a;
	
	printf("\nValor %d e Endereço %d",*(int*)pp,pp);//Endereço da variavel a

	
	getch();
	return 0;

	

	
	
}
