
#include <stdio.h>
#include <iostream>
#include <conio.h>

int main()
{

	FILE *f;
	
	f = fopen("EX1 - fopen.txt","w");//Fopen serve para abrir o arquivo
	
	if (f == NULL)
	{
		printf("Erro na abertura\n");
		system("pause");
		exit(1);
	}
	
	 fclose(f);//Fclose fecha arquivo após terminar de usar
	
	system("pause");
	return 0;
	
	

}
