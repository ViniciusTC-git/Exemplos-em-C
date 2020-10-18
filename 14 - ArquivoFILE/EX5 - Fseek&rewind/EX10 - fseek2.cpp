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
	
	f = fopen("EX10 - fseek.txt","rb");//
	
	if (f == NULL)
	{
		printf("Erro na abertura\n");
		system("pause");
		exit(1);
	}
	
	struct cadastro id;
	
				
	fseek(f,0*sizeof(struct cadastro),SEEK_SET);
	fread(&id,sizeof(struct cadastro),1,f);
	printf("%s\n %s\n %d\n", id.nome,id.rua,id.idade);

 	fclose(f);
	system("pause");
	return 0;
	
	

}
