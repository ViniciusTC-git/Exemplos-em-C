#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


int main(){
	
	char nome[20],nome2[20];
	int aux[2];
	
	printf("Digite nome:");
	gets(nome);
	
	aux[0] = strlen(nome);
	
	printf("Digite nome 2:");
	gets(nome2);
	
	aux[1] = strlen(nome2);

	
	
		if(strlen(nome) > strlen(nome2))
		{
			printf("O primeiro nome possui mais %d letras",strlen(nome));
			
		
		}
		if(strlen(nome) < strlen(nome2))
		{
			printf("O Segundo nome possui mais %d letras",strlen(nome2));

		
		
		}
		
		if(strlen(nome) == strlen(nome2))
		{
				printf("Mesma quantidade");
				
		}

	
	
	
	getch();
	return 0;
	
}
