#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

typedef struct no
{
	int numero;
	char nome[20];
		
	struct no *prox;
		
}no,*Lista;

Lista *criali()
{
	Lista *topo = (Lista*)malloc(sizeof(Lista));
	if(topo!=NULL)
	{
		*topo = NULL;
	}
	return topo;
}	
void insere(Lista *topo,int valor)
{	
	no *novo;	
	novo = (no*) malloc(sizeof(no));
	
	printf("\nDigite nome:");
	scanf("%s",&novo->nome);
	fflush(stdin);
	
	novo->numero=valor;
	novo->prox=(*topo);
	*topo=novo;

	printf("\nConcluido");
	getch();
	system("cls");
}
void lista(Lista *topo)
{
	no *aux;
	
	aux = (no*)malloc(sizeof(no));
	
	aux=*topo;
	
	if(aux==NULL)
	{
		
		printf("Sem cadastro");
		
		
	}
	while(aux!=NULL)
	{
		printf("\n-------------\nEndereco:%x\nID:%d\nNome:%s\nProxEndereco:%x",aux,aux->numero,aux->nome,aux->prox);
		printf("\n");
		aux=aux->prox;		
	}
	
	getch();
	system("cls");
}

int main()
{
	int op,valor=0;
	Lista *topo = criali();
	do
	{
		printf("1-insere");
		printf("\n2-lista");
		printf("\nEscolha");
		scanf("%d",&op);
			
		switch(op)
		{
			case 1:
				valor++;
				insere(topo,valor);
				break;
				
			case 2:	
				lista(topo);
				break;	
		}
		
	}while(op!=0);	

}

