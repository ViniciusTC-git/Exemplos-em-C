#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <string.h>

int main()
{

	
	FILE *f;
	
	f = fopen("EX7 - fwrite.txt","rb");//
	
	if (f == NULL)
	{
		printf("Erro na abertura\n");
		system("pause");
		exit(1);
	}
	
	int ler, v[5] = {1,2,3,4,5};
	
	ler = fread(v,sizeof(int),5,f);
	
	if(ler != 5)
	{
		printf("Erro");
	
	}

	
	printf("%d,%d,%d,%d,%d", v[0],v[1],v[2],v[3],v[4]);
	
	printf("\n");
	
 	fclose(f);
	system("pause");
	return 0;
	
	

}
