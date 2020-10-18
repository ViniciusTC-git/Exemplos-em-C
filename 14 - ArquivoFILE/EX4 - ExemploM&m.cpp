#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>
#include <ctype.h>//Toupper precisa desta biiblioteca

int main()
{

	FILE *f1,*f2;
	
	f1 = fopen("EX4 - minusculo.txt","r");//Fgetc serve para ler palavras inseridas no arquivo
	f2 = fopen("EX4 - maiusculo.txt","w");
		
	if (f1 == NULL || f2 == NULL)
	{
		printf("Erro na abertura\n");
		system("pause");
		exit(1);
	}
	
	char c = fgetc(f1);
	
	while(c != EOF)
	{
	/*	c = fgetc(f1);
		printf("%c",c);
	*/
		fputc(toupper(c),f2);//Transfere a palavra a para maiusculo 
		c = fgetc(f1);
			
	}
	
	fclose(f1);
	fclose(f2);
 	printf("\n");
	system("pause");
	return 0;
	
}
