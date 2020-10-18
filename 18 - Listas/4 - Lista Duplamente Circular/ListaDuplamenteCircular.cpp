#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct no
{
	no *ant;
	int dado;
	no *prox;
	
}no;

no *topo=NULL;	

int valor;

void insereInicio()
{
	no *novo = (no*) malloc(sizeof(no));
	
	valor++;
	
	novo->dado=valor;

	if(topo == NULL)
	{
		novo->prox = novo;
		novo->ant = novo;
		topo = novo;
		printf("\nConcluido insercao primeiro no");
	}
	else
	{
		
		topo->ant->prox=novo;
		novo->ant=topo->ant;
		novo->prox=topo;
		topo->ant=novo;

		topo = novo;
		
		
		/*
		2 FORMA
		no *aux = topo;
		while(aux->prox != topo)
		{
			aux= aux->prox;
		}
		
		aux->prox=novo;
		novo->ant=aux;
		novo->prox=topo;
		topo->ant=novo;
		topo = novo;
		*/
		
		
		printf("\nConcluido insercao inicio");
		
	}
	getch();
	system("cls");
}
void insereFim()
{
	no *novo = (no*) malloc(sizeof(no));
	
	valor++;
	
	novo->dado=valor;
	
	if(topo == NULL)
	{
		novo->prox = novo;
		novo->ant = novo;
		topo = novo;
		printf("\nConcluido insercao primeiro no");
	}
	else
	{
		
		no *aux = topo;
		
		aux->ant->prox=novo;
		novo->ant=aux->ant;
		novo->prox=aux;
		aux->ant=novo;
		
		
		
	/*	2 FORMA
		no *aux = topo;
		
		while(aux->prox != topo)
		{
			aux = aux->prox;
		}
		
		aux->prox=novo;
		novo->ant=aux;
		novo->prox=topo;
		topo->ant=novo;*/
		
		printf("\nConcluido insercao fim");
	}
	getch();
	system("cls");
	
}
void insereMeio()
{
	no *novo = (no*) malloc(sizeof(no));
	
	valor++;
	
	novo->dado=valor;
	
	if(topo == NULL)
	{
		novo->prox = novo;
		novo->ant = novo;
		topo = novo;
		printf("\nConcluido insercao primeiro no");
	}
	else
	{
		no *aux=topo;

		if(aux == aux->prox)
		{
			aux->ant->prox=novo;
			novo->ant=aux->ant;
			novo->prox=aux;
			aux->ant=novo;
			
			/*
			2 FORMA
			aux->prox=novo;
			novo->ant=aux;
			novo->prox=aux;
			aux->ant=novo;
			*/
			printf("\nConcluido insercao meio 1");
		}
		else
		{
			aux->prox->ant=novo;
			novo->prox=aux->prox;
			novo->ant=aux;
			aux->prox = novo;
		
			
			
			
			
			/*
			2 FORMA
			antes = aux;
			aux = aux->prox;
			antes->prox=novo;
			novo->ant=antes;
			novo->prox=aux;
			aux->ant=novo;
			*/
			printf("\nConcluido insercao meio 2");
		}
		
	}
	getch();
	system("cls");
}
void inserePosicao()
{
	int i;
	
	no* novo = (no*) malloc(sizeof(no));
	valor++;
	novo->dado=valor;
	
	printf("\nDigite a posicao para insercao:");
	scanf("%d",&i);
	
	if(topo == NULL)
	{
		novo->prox = novo;
		novo->ant = novo;
		topo = novo;
		printf("\nConcluido insercao primeiro no");
	}
	else
	{
		if(i == 0)
		{
			topo->ant->prox=novo;
			novo->ant=topo->ant;
			novo->prox=topo;
			topo->ant=novo;
			topo = novo;
			
			printf("\nConcluido insercao inicio");
	
		}
		else
		{
				
			if(valor-1 > i)
			{
				no *aux=topo;
				
				for(int j=0;j<i;j++)
				{
					aux = aux->prox;
					
				}
				aux->ant->prox = novo;
				novo->prox=aux;
				novo->ant=aux->ant;
				aux->ant=novo;
				
				
				printf("\nConcluido insercao meio");
				
			}
			else
			{
				topo->ant->prox=novo;
				novo->ant=topo->ant;
				novo->prox=topo;
				topo->ant=novo;
				
				printf("\nConcluido insercao fim");
			}
			
		}
		
	}
	getch();
	system("cls");
}
void removeInicio()
{
	if(topo == NULL)
	{
		printf("\nLista Vazia");
	}
	else
	{
		no *aux=topo;
		
		if(aux == aux->prox)
		{
			free(aux);
			topo = NULL;
			printf("\nConcluido unico no");
		}
		else
		{
			aux->prox->ant=aux->ant;
			aux->ant->prox=aux->prox;
			topo = aux->prox;
			free(aux);
			printf("\nConcluido remocao inicio");
			
			
		}
		
	}
	getch();
	system("cls");
	
}
void removeFim()
{
	if(topo == NULL)
	{
		printf("\nLista Vazia");
	}
	else
	{
		no *aux=topo;
		
		if(aux == aux->prox)
		{
			free(aux);
			topo = NULL;
			printf("\nConcluido unico no");
		}
		else
		{
			while(aux->prox!=topo)
			{
				aux = aux->prox;
			}
			
			aux->ant->prox=aux->prox;
			aux->prox->ant=aux->ant;
			free(aux);
			printf("\nConcluido remocao fim");
			
		}
	
		
		
	}
	getch();
	system("cls");
}
void removeMeio()
{
	if(topo == NULL)
	{
		printf("\nLista Vazia");
	}
	else
	{
		no *aux=topo;
		if(aux == aux->prox)
		{
			free(aux);
			topo = NULL;
			printf("\nConcluido unico no");
		}
		else
		{
			aux = aux->prox;
			aux->ant->prox=aux->prox;
			aux->prox->ant=aux->ant;
			free(aux);
			
			printf("\nConcluido remocao meio");
				
		}
	}
	getch();
	system("cls");
}
void removePosicao()
{
	if(topo == NULL)
	{
		printf("\nLista Vazia");
	}
	else
	{
		no *aux=topo;
		int i;
		printf("\nDigite a posicao para excluir:");
		scanf("%d",&i);
		if(i == 0)
		{
			if(aux == aux->prox)
			{
				free(aux);
				topo = NULL;
				printf("\nConcluido remocao unico no");
				
			}
			else
			{
				aux->prox->ant=aux->ant;
				aux->ant->prox=aux->prox;
				topo = aux->prox;
				free(aux);
				printf("\nConcluido remocao inicio");
			}
		}
		else
		{	
			int cont=0; 
			do
			{
				aux = aux->prox;
				cont++;
				
			}while(aux!=topo);
			
			if(cont > i)
			{
				aux = topo;
				
				for(int j=0;j<i;j++)
				{
					aux = aux->prox;
				}
				aux->ant->prox=aux->prox;
				aux->prox->ant=aux->ant;
				free(aux);
				
				printf("\nConcluido remocao meio");
			}
			else
			{
				printf("\nPosicao invalida");
			}
			
		}
		
		
	}
	getch();
	system("cls");
	
}
void removeID()
{
	if(topo == NULL)
	{
		printf("\nLista vazia");
	}	
	else
	{
		no *aux=topo;
		int i;
		printf("\nDigite o ID para excluir:");
		scanf("%d",&i);
		do
		{
			if(aux->dado == i)
			{
				if(aux == topo)
				{
				
					if(aux == aux->prox)
					{
						free(aux);
						topo = NULL;
						printf("\nConcluido exclusao unico no");
						break;
					}
					else
					{
						aux->ant->prox=aux->prox;
						aux->prox->ant=aux->ant;
						topo = aux->prox;
						free(aux);
						printf("\nConcluido exclusao inicio");
						
					}
				}
				else
				{
					aux->ant->prox=aux->prox;
					aux->prox->ant=aux->ant;
					free(aux);
					printf("\nConcluido exclusao meio");
					
				}
			}
			else
			{
				aux = aux->prox;
			}
			
		}while(aux!=topo);
		
	}
	getch();
	system("cls");
}
void lista()
{
	if(topo == NULL)
	{
		printf("\nLista Vazia");
	}
	else
	{
		no *aux = topo;
		int cont=0;
		
		do
		{
			printf("\n----------------\n\nEndereco Anterior:%x \nEndereco:%x \nDado:%d \nProximo Endereco:%x",aux->ant,aux,aux->dado,aux->prox);
			aux = aux->prox;
			cont++;
			
		}while(aux!=topo);
		printf("\n\nNos alocados:%d",cont);
		
	}
	getch();
	system("cls");
}
void ordenaCresc()
{
	if(topo == NULL)
	{
		printf("\nLista Vazia");
	}
	else
	{
		no *aux,*antes,*depois=topo;
		int aux2;
		
		while(depois->prox != topo)
		{
			depois=depois->prox;
		}
		
		for(aux=topo;aux!=depois;aux=aux->prox)
		{
			for(antes=aux->prox;antes!=depois->prox;antes=antes->prox)
			{
				if(aux->dado > antes->dado)
				{
					aux2=aux->dado;
					aux->dado=antes->dado;
					antes->dado=aux2;
				}
				
			}
		}
		
		printf("\nOrdenacao concluida");
	}
	getch();
	system("cls");
	
}
void trocaPosicao()
{
	if(topo==NULL)
	{
		printf("\nLista vazia");
	}
	else
	{
		no *inicio=topo,*depois=topo,*antes=topo;
		int i,j,cont=0;
		
		printf("\nDigite a posicao i:");
		scanf("%d",&i);
		
		do
		{
			printf("\nDigite a posicao j para troca com a posicao i=%d:",i);
			scanf("%d",&j);
			
			if(j==i)
			{
				printf("\nPosicoes iguais!!!");
			}
			
		}while(j==i);
		
		do
		{
			inicio = inicio->prox;
			cont++;
				
		}while(inicio!=topo);
			
		if(cont > i && cont > j)
		{
			if(i>j)
			{
				for(int k=0;k<i;k++)
				{
					depois=depois->prox;
				}
				for(int k=0;k<j;k++)
				{
					antes=antes->prox;
				}	
			}
			else
			{
				for(int k=0;k<j;k++)
				{
					depois=depois->prox;
				}
				for(int k=0;k<i;k++)
				{
					antes=antes->prox;
				}
			}
			
			
			if(antes->ant==depois)
			{
				depois->prox=antes->prox;
				antes->ant=depois->ant;
				depois->prox->ant=depois;
				antes->ant->prox=antes;
				depois->ant=antes;
				antes->prox=depois;
				topo=depois;
				printf("\nConcluido if antes->ant == depois");
				
			}
			else
			{
				
				if(antes->prox==depois)
				{
					antes->prox=depois->prox;
					depois->ant=antes->ant;
					antes->prox->ant=antes;
					depois->ant->prox=depois;
					depois->prox=antes;
					antes->ant=depois;
					
					if(antes==topo)
					{
						topo=depois;
					}
					
					printf("\nConcluido if antes->prox == depois");
				}
				else
				{
				
					depois->ant->prox=depois->prox;
					antes->prox->ant=antes->ant;
					depois->prox=antes->prox;
					antes->ant=depois->ant;
					antes->prox=antes->ant->prox;
					antes->ant->prox=antes;
					antes->prox->ant=antes;
					depois->ant=depois->prox->ant;
					depois->prox->ant=depois;
					depois->ant->prox=depois;
				
					if(antes==topo)
					{
						topo=depois;
					}
					
					printf("\nConcluido if antes->prox != depois");
				}
			}

		}
			
			
	}
		
	
	getch();
	system("cls");
	
}
void inverte()
{
	if(topo == NULL)
	{
		printf("\nLista Vazia");
	}
	else
	{
		no *fim=topo->ant,*atual=topo->prox,*depois;
	
		topo->prox=topo->ant;
		fim->ant=topo;
		
		while(atual!=fim)
		{
			depois=atual->prox;
			atual->prox=topo;
			atual->ant=topo->ant;
			topo->ant=atual;
			fim->prox=atual;
			topo=atual;
			atual=depois;
			
		}
		
		topo = fim;
		printf("\nConcluido");
	}
	getch();
	system("cls");
}

int main()
{
	int op;
	do
	{
		printf("=====================================");
		printf("\n LISTA CIRCULAR DUPLAMENTE ENCADEADA ");
		printf("\n=====================================\n");
		printf("\n1 - Insercoes");
		printf("\n2 - Remocoes");
		printf("\n3 - Lista");
		printf("\n4 - Ordena Elementos na forma Crescente");
		printf("\n5 - Troca Posicoes");
		printf("\n6 - Inverte");
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
					printf("\n4 - Insere pela Posicao");
					printf("\n0 - Sair");
					printf("\nEscolha:");
					scanf("%d",&op2);
					
					switch(op2)
					{
						case 1:
							insereInicio();
							break;
							
						case 2:	
							insereFim();
							break;
						
						case 3:
							insereMeio();
							break;
								
						case 4:
							inserePosicao();
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
							removeInicio();
							break;
							
						case 2:	
							removeFim();
							break;
						
						case 3:
							removeMeio();
							break;
								
						case 4:	
							removePosicao();
							break;
							
						case 5:
							removeID();
							break;	
					}
					
				}while(op3!=0);
				system("cls");
				break;
				
			case 3:
				lista();
				break;
				
			case 4:
				ordenaCresc();
				break;
			
			case 5:
				trocaPosicao();	
				break;
				
			case 6:
				inverte();
				break;	
				
					
					
		}
	}while(op!=0);
}
