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
	
	f = fopen("EX7 - fwrite3.txt","rb");//
	
	if (f == NULL)
	{
		printf("Erro na abertura\n");
		system("pause");
		exit(1);
	}
	struct cadastro id = {"Vinicius", "Rua 1",19};
	
	fread(&id,sizeof(struct cadastro),1,f);

	printf("%s\n %s\n %d\n", id.nome,id.endereco,id.idade);
	
	printf("\n");	
	
	
	
 	fclose(f);
	system("pause");
	return 0;
	
	

}
