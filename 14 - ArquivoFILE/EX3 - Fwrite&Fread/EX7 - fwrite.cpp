#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <string.h>

int main()
{

	
	FILE *f;
	
	f = fopen("EX7 - fwrite.txt","wb");//
	
	if (f == NULL)
	{
		printf("Erro na abertura\n");
		system("pause");
		exit(1);
	}
	
	int grava, v[5] = {1,2,3,4,5};
	
	grava = fwrite(v,sizeof(int),5,f);
	
	if(grava != 5)
	{
		printf("Erro");
	
	}

	
	printf("\n");	
	
	
	
 	fclose(f);
	system("pause");
	return 0;
	
	

}
