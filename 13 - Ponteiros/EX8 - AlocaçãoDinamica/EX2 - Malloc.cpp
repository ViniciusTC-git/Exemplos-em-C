#include <iostream>
#include <stdlib.h>//Malloc necessita desta biblioteca
#include <conio.h>

int main()
{
	int *p;
	
	p = (int *) malloc(5*sizeof(int));//Malloc ira armazenar memoria 
	
	if(p ==  NULL)//Caso nao houve memoria o programa mostra a seguinte mensagem
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
