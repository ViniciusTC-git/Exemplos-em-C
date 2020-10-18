#include <iostream>
#include <stdlib.h>//calloc necessita desta biblioteca
#include <conio.h>

int main()
{
	int *p;
	
	p = (int *) calloc(5,sizeof(int));//calloc ira armazenar memoria, a diferen�a do calloc para malloc e que todas a posi��es do calloc ter�o 0 e malloc tera sujeira
	
	if(p ==  NULL)//Caso nao hoja memoria o programa mostra a seguinte mensagem
	{
		printf("N�o possui memoria\n");
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
