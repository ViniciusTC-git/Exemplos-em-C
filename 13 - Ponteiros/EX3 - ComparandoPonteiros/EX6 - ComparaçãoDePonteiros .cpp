#include <iostream>
#include <conio.h>

int main()
{
	int *p, *p1, x, y; 
	
	p = &x; //Primeiro ponteiro aponta para endere�o de memoria de x
	
	p1 = &y;//segundo ponteiro aponta para endere�o de memoria de y
	
	if(p == p1)
	{
		printf("Ponteiros iguais x = %d e y = %d", p,p1);
				
	}
	else
	{	
		printf("Ponteiros diferentes x = %d e y = %d", p,p1);//Est�o em endere�os diferentes
	}
	
	getch();
	return 0;

	

	
	
}
