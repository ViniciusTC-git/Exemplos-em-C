#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main()
{
	char v[5][10] = {"a", "d", "c", "b", "e"};
	
	char aux[20];
	
	int i,j,c=0;
	
	for(i = 0; i < 5; i++)
	{
		printf("\nVetor[%d]= %s",i, v[i]);
	}
	
	
	printf("\n ");
	printf("digite letra para comparacao: "); 
	scanf("%s", aux); 
	
	for (i=0; i<5; i++)
	 { 
		if (strcmp(aux,v[i]) == 0) 
		{ 
			printf("\nA letra %s esta na posicao v[%d].", v[i],i); 

		
		}
		else
		{
			c=c+1;
		}
	
	}
	
	if(c==5)
	{
		printf("Letra nao encontrada");
	}
	
	

	
	
	getch();
	return 0;
}
