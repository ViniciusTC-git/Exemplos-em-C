#include <iostream>
#include <conio.h>



int main()
{

	int vet[10]; //variaveis
	int i, aux,cont=0,c=0;

	for (i=0; i<10; i++) 
	{ //laco para receber valores
	
/*	printf("Informe valor do vet[%d]: ", i); //pergunta ao usuario
	scanf("%d", &vet[i]); //gravando dados  */
	
		vet[i]=cont=cont+1;
	
	
	
	}
	printf("digite valor para comparacao: "); //solicitando valor ao usuario
	scanf("%d", &aux); //gravando dados

	for (i=0; i<10; i++)
	 { //laco para percorrer vetor
		if (aux==vet[i]) 
		{ 
			printf("\nO valor digitado esta na posicao vet[%d].", i); //resultado

		
		}
		else
		{
			c=c+1;
		}
	
	}

	if(c==10)
	{
		printf("\nValor nao encontrado");	
	}
	

		getch();
		return 0;
}


