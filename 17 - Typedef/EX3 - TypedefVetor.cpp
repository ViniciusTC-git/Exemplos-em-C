#include <stdlib.h>
#include <stdio.h>

typedef unsigned int vetor[5];//Typedef renomeia o nome do tipo

int main()
{
	vetor v = {1,2,3,4,5};
	
	for(int i=0; i<5; i++)
	{
		printf("%d\n",v[i]);
		
	}
	
}
