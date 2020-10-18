#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>//strlen precisa dessa biblioteca

int main()
{

	FILE *f;
	
	f = fopen("EX5 - fputs2.txt","w");//Fputc serve para inserir palavras no arquivo
	
	if (f == NULL)
	{
		printf("Erro na abertura\n");
		system("pause");
		exit(1);
	}
	
	fputs("Hello\n",f);
	fputs("World\n",f);
	
	//ou
	
	fputs("Hello",f);
	fputc('\n',f);
	fputs("World",f);
	
	
	
 	fclose(f);
	system("pause");
	return 0;
	
	

}
