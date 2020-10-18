#include <iostream>
#include <conio.h>


int main()
{
	int num=0;
	
	
	
	while (num!=5)
	{
	
	printf("\nMenu");
	
	printf("\n1 - Novo Cliente");
	printf("\n2 - Editar Cliente");
	printf("\n3 - Remover");
	printf("\n4 - Listar Cliente");
	printf("\n5 - Sair");
	printf("\n");
	scanf("\n%d", &num);
	system("cls");
	
	
	
	switch (num)
	{
	
	
		
		case 1:
			printf("\n Novo Cliente");
			getch();
			system("cls");
			break;
			
		case 2:	
			printf("\n Editar Cliente");
			getch();
			system("cls");
			break;
	
		case 3:
			printf("\n Remover");
			getch();
			system("cls");
			break;
			
		case 4:
			printf("\n Listar Cliente");
			getch();
			system("cls");
			break;
			
		case 5:
			return 0;
			break;
				
		default:
			printf("opcao invalida");
			getch();
			system("cls");
			break;
}
	
	}
	
	
	return 0;

}
	

