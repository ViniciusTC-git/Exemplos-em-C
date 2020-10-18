#include <iostream>



int main() 
{
	float nota1,nota2,nota3,media;
	printf("Media das provas\n\n");
	printf("Digite o valor da nota 1:");
	scanf("%f", &nota1);
	printf("Digite o valor da nota 2:");
	scanf("%f", &nota2);
	printf("Digite o valor da nota 3:");
	scanf("%f", &nota3);
	system("cls");
	media = (nota1+nota2+nota3)/2;
	printf("Media %.1f\n\n", media);
	if (media<7)
	{
		system("color C");
		printf("Reprovado\n\n");
	}
	else
	{
		system("color A");
		printf("Aprovado\n\n");
	}
	system("pause");
	return 0;
}
