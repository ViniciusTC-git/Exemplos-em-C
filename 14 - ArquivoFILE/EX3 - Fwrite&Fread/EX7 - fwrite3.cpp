#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>

int main()
{
	struct cadastro
	{	char nome[30];
	
		char endereco[30];
		
		int idade;
	
	};
	
	FILE *f;
	
	f = fopen("EX7 - fwrite3.txt","wb");//
	
	if (f == NULL)
	{
		printf("Erro na abertura\n");
		system("pause");
		exit(1);
	}
	struct cadastro id = {"Vinicius", "Rua 1",19};
	
	fwrite(&id,sizeof(struct cadastro),1,f);
	
	printf("\n");	
	
	
	
 	fclose(f);
	system("pause");
	return 0;
	
	

}
