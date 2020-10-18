#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>//strlen precisa dessa biblioteca

int main()
{

	FILE *f;
	
	f = fopen("EX2 - fputc.txt","w");//Fputc serve para inserir palavras no arquivo
	
	if (f == NULL)
	{
		printf("Erro na abertura\n");
		system("pause");
		exit(1);
	}
	
	char texto[20] = "Meu programa em C";
	int i;
	
	for(i=0; i<strlen(texto);i++)
	{
		fputc(texto[i], f);
		
	//fputc(' ',f);// Faz um espaço em cada letra opcional
		
	}
	
	
 	fclose(f);
	system("pause");
	return 0;
	
	

}
