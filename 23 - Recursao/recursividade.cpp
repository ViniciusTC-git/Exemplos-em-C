#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

typedef struct no
{
	int dado;
	no *prox;
}no;

typedef struct head
{
	no *topo;
	
}Lista;

int valor;

void insere(Lista *li)
{
	no *novo = (no*)malloc(sizeof(no));
	no *novo2 = (no*)malloc(sizeof(no));
	no *novo3 = (no*)malloc(sizeof(no));
	
	valor++;
	novo->dado=valor;
	novo->prox=li->topo;
	li->topo = novo;
	
	valor++;
	novo2->dado=valor;
	novo2->prox=li->topo;
	li->topo = novo2;	
	
	valor++;
	novo3->dado=valor;
	novo3->prox=li->topo;
	li->topo = novo3;
	
}
void lista(Lista *li,no *aux)
{
	if(li->topo == NULL)
	{
		printf("\nLista vazia");
	}
	else
	{
		if(aux!=NULL)
		{
			printf("---------------\nEndereco:%x \nDado:%d \nProxEndereco:%x\n",aux,aux->dado,aux->prox);
			lista(li,aux->prox);
			
		}
	}
}
void busca(Lista *li,no *aux,int i)
{
	if(aux->dado == i)
	{
		printf("\nEndereco:%x \nDado:%d \nProxEndereco:%x\n",aux,aux->dado,aux->prox);
	}
	else
	{
		busca(li,aux->prox,i);
	}
}
void limpa(Lista *li,no *aux)
{
	if(li->topo == NULL)
	{
		printf("\nLista Limpa");
	}
	else
	{
		li->topo = aux->prox;
		limpa(li,aux->prox);
		
	}
	
}
int main()
{
	Lista *li = (Lista*) malloc(sizeof(Lista));
	int i;
	if(li!=NULL)
	{
		li->topo = NULL;
	}
	
	insere(li);
	
	no *aux = li->topo;
	
	lista(li,aux);
	
	printf("\nDigite o dado:");
	scanf("%d",&i);
	
	busca(li,aux,i);
	
	limpa(li,aux);
	
	lista(li,aux);
	
	getch();
	return 0;
	
}
