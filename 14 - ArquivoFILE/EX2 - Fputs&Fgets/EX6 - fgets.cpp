#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>//strlen precisa dessa biblioteca

int main()
{

	
	FILE *f;
	
	f = fopen("EX5 - fputs.txt","r");//Fgets le o arquivo
	
	if (f == NULL)
	{
		printf("Erro na abertura\n");
		system("pause");
		exit(1);
	}
	
	char texto[20];
	
	char *retorno = fgets(texto,20,f);	
	

	if(retorno != NULL)
	{
		printf("%s",texto);
	
	}

	
	printf("\n");	
	
	
	
 	fclose(f);
	system("pause");
	return 0;
	
	

}
