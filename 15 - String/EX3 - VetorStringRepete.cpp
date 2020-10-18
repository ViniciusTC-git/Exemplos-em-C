#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main()
{
	char v[5][10] = {"a", "b", "c", "a", "e"};
	
	char aux[20];
	
	int i,j,c=0;
	
	for(i=0;i<5;i++)
	{
		printf("\nVetor[%d]= %s",i,v[i]);
		
		
	}

	for (i=0; i<5; i++)
	 { 
	 	for(j=i+1;j<5;j++)
	 	{
		 
			if (strcmp(v[j - 1], v[j]) == 0) 
			{ 
				printf("\n\nA letra %s se repete na posicao vet[%d] e vet[%d]",v[i],i,j); 

		
			}
			else
			{
				c=c+1;
			}
		}
	
	}
	
	if(c==10)
	{
		printf("\nLetras nao repetem");
	}
	
	

	
	
	getch();
	return 0;
}
