#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>//strlen precisa dessa biblioteca

int main()
{

	
	FILE *f;
	
	f = fopen("EX5 - fputs2.txt","r");//Fgets le o arquivo
	
	if (f == NULL)
	{
		printf("Erro na abertura\n");
		system("pause");
		exit(1);
	}
	
	char texto[20];
	
	fgets(texto,20,f);
	printf("%s",texto);
	
	printf("\n");	
	
	
	
 	fclose(f);
	system("pause");
	return 0;
	
	

}
