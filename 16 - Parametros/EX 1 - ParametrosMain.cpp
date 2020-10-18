#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(int argc, char* argv[])
{
	
	printf("aaaaa");
	
	
	if(argc == 1) 
	{
		printf("\nPrograma %s sem parametros\n",argv[0]);
	}
	else
	{
		
		printf("Parametros do programa %s:\n\n",argv[0]);
		
			for(int i = 1; i<argc; i++)
			{
				printf("Parametro %d: %s\n\n",i,argv[i]);
			}
		
		
	}
	
	system("pause");
	return 0;	
	
}
