#include <iostream>
#include <stdlib.h>//realloc necessita desta biblioteca
#include <conio.h>

int main()
{
	int **p;
	int i,j,n = 2;
	
	p = (int **) malloc(n*sizeof(int));


	for (i=0; i<n; i++)
	{
		p[i] = (int *) malloc(n*sizeof(int));
		
		
		for (j=0; j<n; j++)
		{
			scanf("%d",&p[i][j]);	
		
		}
		
		
	}
	
	for (i=0; i<n; i++)
	{
	
		
		for (j=0; j<n; j++)
		{
			printf("%d ",p[i][j]);	
		
		}
		
		printf("\n");	
	}
	
	
	free(p);//Libera a memoria armazenada
	
	getch();
	return 0;
}
