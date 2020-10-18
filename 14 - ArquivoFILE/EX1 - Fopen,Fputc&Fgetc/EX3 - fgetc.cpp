#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>

int main()
{

	FILE *f;
	
	f = fopen("EX2 - fputc.txt","r");//Fgetc serve para ler palavras inseridas no arquivo
	
	if (f == NULL)
	{
		printf("Erro na abertura\n");
		system("pause");
		exit(1);
	}
	
	char c = fgetc(f);
	int i;
	
	//Pode ser usado tbm !feof(f) ao inves de c!=EOF
	while (c!=EOF)//Aqui ele faz a leitura do EX2 - Fputc e mostra o que esta escrito dentro do arquivo
	{
		printf("%c",c);
		c = fgetc(f);
		
	}
	
	
 	fclose(f);
 	printf("\n");
	system("pause");
	return 0;
	
	

}
