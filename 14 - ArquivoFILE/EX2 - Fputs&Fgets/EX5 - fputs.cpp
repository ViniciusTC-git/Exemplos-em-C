#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>//strlen precisa dessa biblioteca

int main()
{

	FILE *f;
	
	f = fopen("EX5 - fputs.txt","w");//Fputc serve para inserir palavras no arquivo
	
	if (f == NULL)
	{
		printf("Erro na abertura\n");
		system("pause");
		exit(1);
	}
	
	char texto[20] = "Meu programa em C";
		
	int retorno = fputs(texto,f);
	
	
	if(retorno == EOF)
	{
		printf("Erro");
	
	}
	
	
 	fclose(f);
	system("pause");
	return 0;
	
	

}
