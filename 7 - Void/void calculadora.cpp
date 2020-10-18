#include <iostream>
#include <conio.h>

void soma1 ()//Multiplicação
{
	int a,b,r;
	
	printf("\nDigite um Numero:");
	scanf("%d",&a);
	printf("\nDigite um Numero:");
	scanf("%d",&b);
	
	printf("%d x %d = %d",a,b,r,r=a*b);	
}

void soma2(int xy1, int yx1)//Divisão
{
	int re;
	
	printf("\n%d / %d = %d",xy1,yx1,re,re=xy1/yx1);
	
}
void soma3(int a,int b,int r)//Subtraçao
{

	printf("\n%d - %d = %d",a,b,r,r=a-b);
		
	
}
int soma4(int x, int y)//Soma
{
	
	printf("\n%d + %d ",x,y);
	
	return x+y;
		
}

int main()
{
	int num,x,y,r;
	int resposta;
	
	do
	{
		printf("\nMenu");
		printf("\nOpcao 1 - Multiplicacao");
		printf("\nOpcao 2 - Divisao");
		printf("\nOpcao 3 - Subtracao");
		printf("\nOpcao 4 - Soma");
		printf("\nOpcao 5 - Sair");
		printf("\n");
		scanf("\%d", &num);
		system("cls");
		
		switch (num)
		{
			case 1:
				printf("\nSoma 1 Multiplicacao");
					
				soma1();
				getch();
				
				printf("\n1 - Voltar para menu");
				printf("\n0 - Sair");
				printf("\nDigite a opcao:");
				scanf("%d", &resposta);
						
				system("cls");
		
				break;
			
			case 2:
				printf("\nSoma 2 Divisao");
		
				printf("\nDigite um Numero:");
				scanf("%d",&x);
				printf("\nDigite um Numero:");
				scanf("%d",&y);
				soma2(x,y);
				getch();
				printf("\n1 - Voltar para menu");
				printf("\n0 - Sair");
				printf("\nDigite a opcao:");
				scanf("%d", &resposta);
				system("cls");
				break;
				
			case 3:
				printf("\nSoma 3 Subtracao");
				printf("\nDigite um Numero:");
				scanf("%d",&x);
				printf("\nDigite um Numero:");
				scanf("%d",&y);
				soma3(x,y,r);
				getch();
				printf("\n1 - Voltar para menu");
				printf("\n0 - Sair");
				printf("\nDigite a opcao:");
				scanf("%d", &resposta);
				system("cls");
				break;
				
			case 4:	
				printf("\nSoma 4 Mais");
				
				printf("\nDigite um Numero:");
				scanf("%d",&x);
				printf("\nDigite um Numero:");
				scanf("%d",&y);
		
				r = soma4(x,y);
		
				printf("= %d", r);
				getch();
				printf("\n1 - Voltar para menu");
				printf("\n0 - Sair");
				printf("\nDigite a opcao:");
				scanf("%d", &resposta);
				system("cls");	
				break;
	
			case 5:
				break;	
				
			default:
				printf("Opcao invalida");
				getch();
				system("cls");
				break;
			
				
		}
		
	}while (resposta!=0);
	
	return 0;
	
}
