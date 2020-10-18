#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

typedef struct no
{
	int dado;
	no *esq;
	no *dir;
		
}*ArvBin;

typedef struct Pilha
{
	no *info;
	Pilha *prox;
}Pilha;
typedef struct Pilha *pilha;

pilha* criapi()
{
	pilha *pi=(pilha*)malloc(sizeof(pilha));
	if(pi!=NULL)
	{
		*pi = NULL;
	}
	return pi;
}

ArvBin* cria()
{
	ArvBin *raiz =(ArvBin*)malloc(sizeof(ArvBin));
	if(raiz!=NULL)
	{
		*raiz = NULL;
	}
	return raiz;
}
no* aloca(int valor)
{
	no *novo=(no*)malloc(sizeof(no));
	novo->dado=valor;
	novo->esq=novo->dir=NULL;
	
	return novo;
}
void insere(ArvBin *raiz,int valor)//ITERATIVAA
{
	no *novo = aloca(valor);
	
	if(*raiz==NULL)
	{
		*raiz=novo;
	}
	else
	{
		no* atual=*raiz,*antes=NULL;
		
		while(atual!=NULL)
		{
			antes = atual;
			if(valor > atual->dado)
			{
				atual = atual->dir;
			}
			else
			{
				atual = atual->esq;
			}
		}
		if(valor > antes->dado)
		{
			antes->dir = novo;
		}
		else
		{
			antes->esq = novo;
		}
	}	
}
no *insere2(ArvBin *raiz,no* novo)//RECURSIVA
{
	if(*raiz == NULL)
	{
		return novo;
	}
	else if((*raiz)->dado < novo->dado)
	{
		(*raiz)->dir = insere2(&((*raiz)->dir),novo);
	}
	else
	{
		(*raiz)->esq = insere2(&((*raiz)->esq),novo);
	}
	
	return *raiz;
	
}
no *remover(ArvBin *raiz,int valor)//RECURSIVO
{
	if(*raiz!=NULL)
	{
		if(valor > (*raiz)->dado)
		{
			(*raiz)->dir = remover(&((*raiz)->dir),valor);
		}
		else if(valor < (*raiz)->dado)
		{
			(*raiz)->esq = remover(&((*raiz)->esq),valor);
		}
		else
		{
			if((*raiz)->dir == NULL && (*raiz)->esq == NULL)
			{
				no *aux=*raiz;
				free(aux);
				*raiz = NULL;
			}
			else if((*raiz)->esq == NULL)
			{
				no *aux=*raiz;
				*raiz = (*raiz)->dir;
				free(aux);
			}
			else if((*raiz)->dir == NULL)
			{
				no *aux=*raiz;
				*raiz = (*raiz)->esq;
				free(aux);
			}
			else
			{
				no *aux = (*raiz)->esq;
				while(aux->dir!=NULL)
				{
					aux = aux->dir;
				}
				(*raiz)->dado=aux->dado;
				aux->dado=valor;
				(*raiz)->esq = remover(&((*raiz)->esq),valor);
			}
		}
	}
	return *raiz;
}
void preordem(ArvBin *raiz)
{
	if(*raiz!=NULL)
	{
		printf("\n----------\n\n  Endereco:%x \n  Dado:%d \n\nEsq:%x  Dir:%x",*raiz,(*raiz)->dado,(*raiz)->esq,(*raiz)->dir);
		preordem(&((*raiz)->esq));
		preordem(&((*raiz)->dir));
	}
}
void impar(ArvBin *raiz)
{
	if(*raiz!=NULL)
	{
		impar(&((*raiz)->esq));
		impar(&((*raiz)->dir));
		
		if((*raiz)->dado%2!=0)
		{
			printf("\n----------\n\n Endereco:%x \n  Dado:%d \n\nEsq:%x  Dir:%x",*raiz,(*raiz)->dado,(*raiz)->esq,(*raiz)->dir);
		}
		
	}
}
void par(ArvBin *raiz)
{
	if(*raiz!=NULL)
	{
		par(&((*raiz)->esq));
		par(&((*raiz)->dir));
		
		if((*raiz)->dado%2==0)
		{
			printf("\n----------\n\n Endereco:%x \n  Dado:%d \n\nEsq:%x  Dir:%x",*raiz,(*raiz)->dado,(*raiz)->esq,(*raiz)->dir);
		}
	}
}
int verif(ArvBin *raiz)
{
	if(*raiz!=NULL)
	{
		if((*raiz)->dir > (*raiz)->esq)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}	
}
int maior(ArvBin *raiz)
{
	if(*raiz!=NULL)
	{
		int	i = maior(&((*raiz)->esq));
		i = maior(&((*raiz)->dir));
		if((*raiz)->dado > i)
		{
			i=(*raiz)->dado;
		}
		return i;	
	}
}

int main()
{
	ArvBin *raiz = cria();
	pilha *pi = criapi();
	insere(raiz,10);
	insere(raiz,5);
	insere(raiz,4);
	insere(raiz,6);
	insere(raiz,7);
	insere(raiz,20);
	
	*raiz = insere2(raiz,aloca(29));
	printf("  \n\n---Imprime---");
	preordem(raiz);
	*raiz = remover(raiz,6);
	
	printf("  \n\n---Numeros Impares---");
	impar(raiz);
	printf("  \n\n---Numeros pares---");
	par(raiz);
	printf("  \n\n---Verifica o tipo de arvore---");
	int valor = verif(raiz);
	if(valor){
		printf("\nE uma arvore binaria");
	}
	int i;
	i = maior(raiz);
	printf("\n\nMaior numero:%d",i);


	getch();
	return 0;		
}
