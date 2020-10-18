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
	no *fim;
	int qtd;
	
}lista;

typedef struct head2
{
	no *topo;
	no *fim;
	int qtd;
	
}lista2;




lista *crialista()
{
	lista *li =(lista*)malloc(sizeof(lista));
	if(li != NULL)
	{
		li->topo=NULL;
		li->fim=NULL;
		li->qtd=0;
		printf("Lista criada");
		
	}
	
	return li;
}
lista2 *crialista2()
{
	lista2 *li2 =(lista2*)malloc(sizeof(lista2));
	if(li2 != NULL)
	{
		li2->topo=NULL;
		li2->fim=NULL;
		li2->qtd=0;
		printf("Lista criada");
		
	}
	
	return li2;
}
void insereInicio(int valor,lista *li)
{
	no *novo = (no*)malloc(sizeof(no));
	novo->dado=valor;
	novo->prox=li->topo;
	
	if(li->topo == NULL)
	{
		li->fim=novo;
	}
	
	li->topo = novo;
	li->qtd++;
	
	printf("\nConcluido insercao inicio");
	getch();
	system("cls");
	
}
void insereFim(int valor,lista *li)
{
	no *novo=(no*)malloc(sizeof(no));
	novo->dado=valor;
	novo->prox=NULL;
		
	if(li->topo==NULL)
	{
		li->topo=novo;
		printf("\nConcluido insercao primeiro no");
	}
	else
	{
		li->fim->prox=novo;
		printf("\nConcluido insercao fim");	
	}
		
	li->fim=novo;
	li->qtd++;	
	getch();
	system("cls");
}
void insereMeio(int valor,lista *li)
{
	no *novo = (no*)malloc(sizeof(no));
	novo->dado=valor;
	
	if(li->topo == NULL)
	{
		novo->prox=li->topo;
		li->topo=novo;
		li->fim=novo;
		printf("\nConcluido insercao primeiro no");
	}
	else
	{	
		no *aux = li->topo,*antes;
		
		antes=aux;
		aux=aux->prox;
		antes->prox=novo;
		novo->prox=aux;
		printf("\nConcluido insercao meio");
	}
	li->qtd++;
	getch();
	system("cls");	
}
void inserePosicao(int i,int valor,lista *li)
{
	int cont=0;
	no *aux= li->topo,*antes;
	no *novo = (no*)malloc(sizeof(no));
	novo->dado=valor;
	
	if(li->topo == NULL)
	{
		novo->prox=li->topo;
		li->topo=novo;
		li->fim=novo;
		printf("\nConcluido insercao primeiro no");
	}
	else
	{
		while(aux!=NULL)
		{
			aux=aux->prox;
			cont++;
		}

		if(cont > i)
		{
			aux=li->topo;
					
			for(cont=0;cont<i;cont++)
			{
				antes = aux;
				aux = aux->prox;
			}
			if(cont==0)
			{
				novo->prox=li->topo;
				li->topo=novo;
				printf("\nConcluido insercao inicio");
			}
			else
			{
				antes->prox=novo;
				novo->prox=aux;
				printf("\nConcluido insercao meio");
			}
	
		}
		else
		{
			novo->prox=NULL;
			li->fim->prox=novo;
			li->fim=novo;
			printf("\nConcluido insercao fim");			
		}
		
	}
	li->qtd++;
	getch();
	system("cls");
		
}
void removeInicio(lista *li)
{
	if(li->topo == NULL || li->qtd == 0)
	{
		printf("\nLista Vazia");
	}
	else
	{
		no *aux = li->topo;

		li->topo = aux->prox;
	
		if(aux->prox==NULL)
		{
			li->fim=NULL;
		}
		free(aux);
		li->qtd--;
		
		printf("\nConcluido remocao inicio");		
	}
	getch();
	system("cls");
	
}
void removeFim(lista *li)
{
	if(li->topo == NULL || li->qtd == 0)
	{
		printf("\nLista Vazia");
	}
	else
	{
		no *aux=li->topo,*antes;
		
		if(aux->prox==NULL)
		{
			li->topo=NULL;
			li->fim=NULL;
			printf("\nConcluido remocao unico no");
		}
		else
		{
			while(aux->prox!=NULL)
			{
				antes = aux;
				aux = aux->prox;
			}
			li->fim=antes;
			antes->prox=aux->prox;
			printf("\nConcluido remocao fim");
			
		}
		free(aux);
		li->qtd--;
	}
	getch();
	system("cls");
}
void removeMeio(lista *li)
{
	if(li->topo == NULL || li->qtd == 0)
	{
		printf("\nLista Vazia");
	}
	else
	{
		no *aux=li->topo,*antes;
		
		if(aux->prox == NULL)
		{
			li->topo=NULL;
			li->fim=NULL;
			printf("\nConcluido remocao unico no");
		}
		else
		{
			if(aux->prox == li->fim)
			{
				li->fim=antes;
			}
			antes = aux;
     		aux = aux->prox;
			antes->prox=aux->prox;
			printf("\nConcluido remocao meio");
		}
		li->qtd--;
		free(aux);
	}
	getch();
	system("cls");
}
void removePosicao(int i,lista *li)
{
	if(li->topo == NULL || li->qtd == 0)
	{
		printf("\nLista Vazia");
	}
	else
	{
		no *aux = li->topo,*antes;
		int k=0;
		
		while(aux!=NULL)
		{
			aux = aux->prox;
			k++;
		}
		if(k > i)
		{
			aux = li->topo;
			
			for(k=0;k<i;k++)
			{
				antes = aux;
				aux = aux->prox;
			}
			if(k==0)
			{
				li->topo = aux->prox;
				if(aux->prox==NULL)
				{
					li->fim=aux->prox;
				}
				printf("\nConcluido remocao inicio");
			}
			else
			{
				if(aux->prox == NULL)
				{
					li->fim=antes;
				}
			
				antes->prox = aux->prox;
				printf("\nConcluido remocao meio");
				
	
			}
			free(aux);
			li->qtd--;
		}
		else
		{
			printf("\nPosicao invalida");
		}

	}
	getch();
	system("cls");
}
void removeID(int i,lista *li)
{
	if(li->topo == NULL || li->qtd == 0)
	{
		printf("\nLista Vazia");
	}
	else
	{
		no *aux=li->topo,*antes;
		
		while(aux!=NULL)
		{
			if(aux->dado == i)
			{
				if(aux==li->topo)
				{
					li->topo = aux->prox;
					if(aux->prox==NULL)
					{
						li->fim=aux->prox;
					}
					printf("\nConcluido remocao inicio");	
					
				}
				else
				{
					if(aux->prox==NULL)
					{
						li->fim=antes;
					}
					antes->prox=aux->prox;
					printf("\nConcluido remocao meio");	
						
				}
				free(aux);
				li->qtd--;
				
			}
			else
			{
				antes = aux;
				aux = aux->prox;
			}
		}
		if(aux == NULL)
		{
			printf("\nID invalido");
		}
	}
	getch();
	system("cls");
	
}
void Lista(lista *li)
{

	if(li->topo == NULL || li->qtd == 0)
	{
		printf("\nLista Vazia");
	}
	else
	{
		no *aux = li->topo;
		
		while(aux!=NULL)
		{
			printf("\n-------------\nEndereco:%x\nDado:%d\nProxEndereco:%x",aux,aux->dado,aux->prox);
			aux = aux->prox;
		}
		printf("\n\nTotal de nos: %d",li->qtd);
	}
	getch();
	system("cls");
}
void ordenaCresc(lista *li)
{
	if(li->topo == NULL || li->qtd == 0)
	{
		printf("\nLista Vazia");
	}
	else
	{
		no *aux,*depois;
		int backup;
		
		for(aux=li->topo;aux!=NULL;aux=aux->prox)
		{
			for(depois=aux->prox;depois!=NULL;depois=depois->prox)
			{
				if(aux->dado > depois->dado)
				{
					backup=aux->dado;
					aux->dado=depois->dado;
					depois->dado=backup;	
				}
			}
		}
		
		printf("\nConcluido ordenacao");
	}
	
	getch();
	system("cls");
}
void trocaPosicoes(int i,int j,lista *li)
{
	if(li->topo == NULL)
	{
		printf("\nLista Vazia");
		
	}	
	else
	{
		no *contnos=li->topo,*depois=li->topo,*antes=li->topo,*depois2=li->topo,*antes2=li->topo;
		int cont=0;
		
		while(contnos!=NULL)
		{
			contnos = contnos->prox;
			cont++;
		}
		if(cont > i && cont > j)
		{
			if(i > j)
			{
				for(cont=0;cont<i;cont++)
				{
					antes = depois;
					depois = depois->prox;
				}
				for(cont=0;cont<j;cont++)
				{
					antes2 = depois2;
					depois2 = depois2->prox;
				}
			}
			else
			{
				for(cont=0;cont<j;cont++)
				{
					antes = depois;
					depois = depois->prox;
				}
				for(cont=0;cont<i;cont++)
				{
					antes2 = depois2;
					depois2 = depois2->prox;
				}
			}
			if(depois2 == li->topo)
			{
				if(depois2->prox == depois)
				{
					depois2->prox=depois->prox;
					depois->prox=depois2;
					li->topo = depois;
					printf("\nConcluido 1 if depois2->prox == depois");
				}
				else
				{
					antes->prox=depois->prox;
					depois->prox=depois2->prox;
					depois2->prox=antes->prox;
					antes->prox=depois2;
					li->topo = depois;
					
					printf("\nConcluido 1 if depois2->prox != depois");
				}
				if(depois == li->fim)
				{
					li->fim=depois2;
				}
	
			}
			else
			{
				if(depois2->prox == depois)
				{
					antes2->prox=depois;
					depois2->prox=depois->prox;
					depois->prox=depois2;
					printf("\nConcluido 2 if depois2->prox == depois");
				}
				else
				{
					antes->prox=depois->prox;
					depois->prox=depois2->prox;
					depois2->prox=antes->prox;
					antes->prox=depois2;
					antes2->prox=depois;
					printf("\nConcluido 2 if depois2->prox != depois");
				}
				if(depois == li->fim)
				{
					li->fim=depois2;
				}
			}
			
		}
		else
		{
			printf("\nPosicoes invalidas");
		}
	
	}
	getch();
	system("cls");
	
}
void inverte(lista *li)
{
	if(li->topo == NULL || li->qtd == 0)
	{
		printf("\nLista Vazia");		
	}
	else
	{
		no *atual=li->topo->prox,*depois;
		li->topo->prox=NULL;
		
		while(atual!=NULL)
		{
			depois=atual->prox;
			atual->prox=li->topo;
			li->topo=atual;
			atual=depois;
		}
		
		printf("\nConcluido");
	}
	getch();
	system("cls");
}
void concatena(lista *li)
{
	if(li->topo == NULL || li->qtd == 0)
	{
		printf("\nLista Vazia");		
	}
	else
	{
		int valor=2;
		lista2 *li2 = crialista2();
		no *novo = (no*)malloc(sizeof(no));
		no *novo2 = (no*)malloc(sizeof(no));
		valor++;
		novo->dado=valor;
		valor++;
		novo2->dado=valor;
		novo->prox=li2->topo;
		novo2->prox=novo;
		if(li2->topo == NULL)
		{
			li2->fim=novo2;
		}
		li2->topo = novo2;
		li2->qtd++;
		li2->qtd++;
		
		li->fim->prox=li2->topo;
		
		no *aux=li->topo;
		while(aux!=NULL)
		{
			printf("\n-------------\nEndereco:%x\nDado:%d\nProxEndereco:%x",aux,aux->dado,aux->prox);
			aux = aux->prox;
		}
		
		getch();
		system("cls");
		
		
		
		
	}
}
void intercala(lista *li)
{
	if(li->topo == NULL || li->qtd == 0)
    {	
	 	printf("\nLista Vazia");	
	}	
	else
	{
		int valor=2;
		lista2 *li2 = crialista2();
		no *novo = (no*)malloc(sizeof(no));
		no *novo2 = (no*)malloc(sizeof(no));
		valor++;
		novo->dado=valor;
		valor++;
		novo2->dado=valor;
		novo->prox=li2->topo;
		novo2->prox=novo;
		if(li2->topo == NULL)
		{
			li2->fim=novo2;
		}
		li2->topo = novo2;
		li2->qtd++;
		li2->qtd++;
		
		no *aux=li->topo,*aux2=li2->topo;
		no *depois=li->topo->prox,*depois2=li2->topo->prox;
		
		while(depois!=NULL && depois2!=NULL)
		{
			aux->prox=aux2;
			aux2->prox=depois;
			aux=depois;
			depois = depois->prox;
			aux2=depois2;
			depois2 = depois2->prox;
			
		
			
	
		}
		aux->prox=aux2;
		
		
		aux = li->topo;
		while(aux!=NULL)
		{
			printf("\n-------------\nEndereco:%x\nDado:%d\nProxEndereco:%x",aux,aux->dado,aux->prox);
			aux = aux->prox;
		}
		
	}
	getch();
	system("cls");
}

int main()
{
	int i,j,op,valor=0;
	
	lista *li = crialista();
	
	do
	{
		printf("\n1 - Insercoes");
		printf("\n2 - Remocoes");
		printf("\n3 - Lista");
		printf("\n4 - Ordena Crescente");
		printf("\n5 - Troca Posicoes");
		printf("\n6 - Inverte");
		printf("\n7 - Concatena");
		printf("\n8 - Intercala");
		printf("\n0 - Sair");
		printf("\nEscolha:");
		scanf("%d",&op);
		
		switch(op)
		{
			case 1:	
				system("cls");
				int op2;
				do
				{
					printf("\n1 - Insere Inicio");
					printf("\n2 - Insere Fim");
					printf("\n3 - Insere Meio");
					printf("\n4 - Insere Posicao");
					printf("\n0 - Sair");
					printf("\nEscolha:");
					scanf("%d",&op2);
					
					switch(op2)
					{
						case 1:
							valor++;
							insereInicio(valor,li);
							break;
					
						case 2:
							valor++;
							insereFim(valor,li);
							break;
					
						case 3:
							valor++;
							insereMeio(valor,li);
							break;
					
						case 4:
							printf("Digite a posicao que deseja inserir:");
							scanf("%d",&i);
							valor++;
							inserePosicao(i,valor,li);
							break;		
					}
					
				}while(op2!=0);
				system("cls");
				break;
			
			case 2:
				system("cls");
				int op3;
				do
				{
					printf("\n1 - Remove Inicio");
					printf("\n2 - Remove Fim");
					printf("\n3 - Remove Meio");
					printf("\n4 - Remove pela Posicao");
					printf("\n5 - Remove pelo ID");
					printf("\n0 - Sair");
					printf("\nEscolha:");
					scanf("%d",&op3);
			
					switch(op3)
					{
						case 1:
							removeInicio(li);
							break;
					
						case 2:
							removeFim(li);
							break;
					
						case 3:
							removeMeio(li);
							break;
					
						case 4:
							printf("\nDigite a posicao que deseja excluir:");
							scanf("%d",&i);
							removePosicao(i,li);
							break;
							
						case 5:
							printf("\nDigite o ID que deseja excluir:");
							scanf("%d",&i);
							removeID(i,li);
							break;			
					}
					
				}while(op3!=0);
				system("cls");
				break;
					
			
			case 3:
				Lista(li);
				break;
			
			case 4:
				ordenaCresc(li);
				break;
			
			case 5:
				if(li->qtd == 1)
				{
					printf("\nLista com 1 no");
					getch();
					system("cls");
				}
				else
				{
					printf("\nDigite a posicao i:");
					scanf("%d",&i);
					do
					{
						printf("\nDigite a posicao j para alterar pela posicao i=%d:",i);
						scanf("%d",&j);
						if(j == i)
						{
							printf("\nPosicoes devem ser diferentes");
						}
					}while(j==i);
					
					trocaPosicoes(i,j,li);
				}
				break;
				
			case 6:
				inverte(li);
				break;
				
			case 7:
				concatena(li);
				break;
				
			case 8:
				intercala(li);
				break;				
		}
		

		
	}while(op!=0);
	
	
	
	
}
