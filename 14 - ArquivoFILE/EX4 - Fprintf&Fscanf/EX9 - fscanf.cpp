#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <string.h>

int main()
{
	char texto[20],nome[20];
	int id;
	float h;
	
	FILE *f;
	
	f = fopen("EX9 - fprintf.txt","r");//
	
	if (f == NULL)
	{
		printf("Erro na abertura\n");
		system("pause");
		exit(1);
	}
	
	fscanf(f,"%s %s", texto,nome);	
	printf("%s %s\n", texto,nome);	
	
	fscanf(f,"%s %d", texto,&id);	
	printf("%s %d\n", texto,id);
	
	fscanf(f,"%s %f", texto,&h);	
	printf("%s %f\n", texto,h);
	
	printf("\n");	
	
	
	
 	fclose(f);
	system("pause");
	return 0;
	
	

}
