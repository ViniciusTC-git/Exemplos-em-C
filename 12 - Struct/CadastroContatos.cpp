#include <iostream>
#include <conio.h>

int main()
{
	struct arquivo
	{
		char numero[50];
		char nome[50];
	};
	
	struct arquivo id[3];
	
	int i;
	
	for(i=0;i<3;i++)
	{
		printf(" \nDigite o nome do contato %d:",i+1);
		scanf("%s", &id[i].nome);
		
		printf(" \nDigite o numero do contato %d:",i+1);
		scanf("%s", &id[i].numero);
		
		
	}
	
	for(i=0;i<3;i++)
	{
		printf(" \nContato %d: %s",i+1,id[i].nome);
		
		printf(" \nNumero do contato %d %s: %s",i+1,id[i].nome,id[i].numero);
		
		printf("\n");
		
	}

	getch();
	return 0;
	
}
