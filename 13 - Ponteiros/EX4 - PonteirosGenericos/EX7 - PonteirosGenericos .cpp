#include <iostream>
#include <conio.h>

int main()
{
	void *pp;
	int *p1, a=10;
	
	p1 = &a;
	pp = &a;
	
	printf("\nEndereco em void pp %d",pp);//Endere�o da variavel a
	
	pp = &p1;
	
	printf("\nEndereco em void pp %d",pp);//Endere�o do ponteiro
	
	pp = p1;

	printf("\nEndereco em void pp %d",pp);//Endere�o do ponteiro,onde o primeiro ponteiro aponta para a variavel a
	
	getch();
	return 0;

	

	
	
}
