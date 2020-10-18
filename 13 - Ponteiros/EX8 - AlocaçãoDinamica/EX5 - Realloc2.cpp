#include <iostream>
#include <stdlib.h>//realloc necessita desta biblioteca
#include <conio.h>

int main()
{
	int *p,*p1;
	
	p = (int *) malloc(5*sizeof(int));

	p1 = (int *) realloc(p,15*sizeof(int));//o realloc Aumenta a memoria e remove
	
	if(p1 !=  NULL)//Caso haja memoria p1 copia os dados de p
	{
		p = p1;
		
	}
	

	
	getch();
	return 0;
}
