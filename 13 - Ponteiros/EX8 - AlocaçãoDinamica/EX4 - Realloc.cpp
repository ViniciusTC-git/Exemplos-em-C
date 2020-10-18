#include <iostream>
#include <stdlib.h>//realloc necessita desta biblioteca
#include <conio.h>

int main()
{
	int *p;
	
	p = (int *) malloc(5*sizeof(int));

	p = (int *) realloc(p,15*sizeof(int));//o realloc Aumenta a memoria e remove
	
	if(p ==  NULL)//Caso nao hoja memoria o programa mostra a seguinte mensagem
	{
		printf("Não possui memoria\n");
		exit(1);//termina programa
	}
	
	int i;
	
	for (i=0; i<5; i++)
	{
		printf("Digite p[%d]:",i);
		scanf("%d", &p[i]);
		
	}
	
	for (i=0; i<5; i++)
	{
		printf("%d\n",p[i]);	
		
	}
	
	free(p);//Libera a memoria armazenada
	
	getch();
	return 0;
}
