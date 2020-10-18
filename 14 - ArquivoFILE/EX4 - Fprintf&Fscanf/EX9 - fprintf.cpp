#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <string.h>

int main()
{
	char nome[20] = "Vinicius";
	int i = 19;
	float a = 1.76;
	
	FILE *f;
	
	f = fopen("EX9 - fprintf.txt","w");//
	
	if (f == NULL)
	{
		printf("Erro na abertura\n");
		system("pause");
		exit(1);
	}
	

	
	fprintf(f,"Nome: %s\n Idade: %d\n Altura: %0.2f\n", nome,i,a);	
	
	
	printf("\n");	
	
	
	
 	fclose(f);
	system("pause");
	return 0;
	
	

}
