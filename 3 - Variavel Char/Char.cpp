#include <iostream>

//exemplo

int main() 
{
	char nome[30];
	printf("Digite seu nome:");
	gets(nome);
	system("cls");
	printf("Bem vindo %s\n", nome);
	system("pause");
	return 0;
}
