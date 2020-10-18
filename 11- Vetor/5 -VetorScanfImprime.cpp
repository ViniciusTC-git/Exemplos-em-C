#include <iostream>
#include <conio.h>

void vetor1();

void vetor2();

void vetor3();

void vetor4();

void vetor5();

int a[10];

int b[10];

int i;

int main()
{
	
	vetor1();	
	getch;
	vetor2();
	getch;
	vetor3();
	getch;
	vetor4();
	getch;
	vetor5();
	getch;
	return 0;
	
}

void vetor1()
{
	printf("\nVetor 1 scanf");
	printf("\n");
	for(i=0;i<=9;i++)
		{
			scanf("%d", &a[i]);
		}
	
	
}

void vetor2()
{
	printf("\nVetor 1 printf");
	printf("\n");
	for(i=0;i<=9;i++)
		{
			printf("\n%d", a[i]);
		}
	

	
}
void vetor3()
{
	
	printf("\nVetor 2 copia");
	printf("\n");
	for(i=0;i<=9;i++)
		{
			b[i]=a[i];
			
		}
	
}
void vetor4()
{
	
	printf("\nVetor 2 printf");
	printf("\n");
	for(i=0;i<=9;i++)
		{
			
			printf("\n%d", b[i]);
		}
	
	
}
void vetor5()
{
	printf("\nVetor 1 invertido");
	printf("\n");
	for(i=9;i>=0;i--)
		{
			printf("\n%d", a[i]);
		}
	
	
}
