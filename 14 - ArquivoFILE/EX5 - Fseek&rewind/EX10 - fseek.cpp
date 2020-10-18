#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <string.h>

int main()
{
	struct cadastro {
	char nome[20],rua[20];
	int idade;	
	};
	FILE *f;
	
	f = fopen("EX10 - fseek.txt","wb");//
	
	if (f == NULL)
	{
		printf("Erro na abertura\n");
		system("pause");
		exit(1);
	}
	
	struct cadastro id [4] = { "Vinicius", "Rua 1", 19,
					"Carlos", "Rua 2", 28,
					"Ana", "Rua 3", 45,
					"Bianca","Rua 4", 32};
	
	fwrite(id,sizeof(struct cadastro),4,f);

 	fclose(f);
	system("pause");
	return 0;
	
	

}
