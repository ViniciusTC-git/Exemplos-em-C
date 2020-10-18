#include <iostream>
#include <conio.h>

int main()
{
	void *pp;
	int *p1, a=10;
	
	p1 = &a;
	pp = &a;
	
	printf("\nEndereco em void pp %d",pp);//Endereço da variavel a
	
	pp = &p1;
	
	printf("\nEndereco em void pp %d",pp);//Endereço do ponteiro
	
	pp = p1;

	printf("\nEndereco em void pp %d",pp);//Endereço do ponteiro,onde o primeiro ponteiro aponta para a variavel a
	
	getch();
	return 0;

	

	
	
}
