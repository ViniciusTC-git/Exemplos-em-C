#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

typedef struct no
{
	int dado;
	
	no *prox;
	
}no;

no *topo=NULL;


int valor;

void insereInicio()
{
	no* novo;
	
	novo = (no*)malloc(sizeof(no));
	
	valor++;
	novo->dado=valor;
	
	if(topo == NULL)
	{
		novo->prox=novo;
		topo = novo;
		
	}
	else
	{
		no *aux = topo;
		
		while(aux->prox != topo)
		{
			aux= aux->prox;
		}
		
		aux->prox=novo;
		novo->prox=topo;
		topo = novo;
			
	}
	
	printf("\nConcluido");
	getch();
	system("cls");
	
}
void insereFim()
{
	no *novo;
	
	novo = (no*) malloc(sizeof(no));
	
	valor++;
	novo->dado = valor;
	if(topo == NULL)
	{
		novo->prox=novo;
		topo = novo;
		printf("\nConcluido insercao inicio");
		
	}
	else
	{
		no *aux=topo;
		
		while(aux->prox != topo)
		{
			aux=aux->prox;
		}
		aux->prox=novo;
		novo->prox=topo;
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
		novo->prox=novo;
		topo=novo;
		printf("\nConcluido insercao inicio");
	}
	else
	{
		no* aux = topo,*antes;
		antes = aux;
		aux = aux->prox;
		
		if(aux == topo)
		{
			antes->prox=novo;
			novo->prox = topo;
			printf("\nConcluido insercao fim");
		}
		else
		{
			antes->prox = novo;
			novo->prox = aux;
			printf("\nConcluido insercao meio");
		}
		
		
	}
	getch();
	system("cls");
}
void insereOrdenado()
{
	no *novo = (no*) malloc(sizeof(no));
	valor++;
	novo->dado = valor;
	
	if(topo == NULL)
	{
		novo->prox = novo;
		topo = novo;
	}
	else
	{
		no *aux=topo;
		
		while(aux->prox != topo)
		{
			aux = aux->prox;
		}
		
		aux->prox=novo;
		novo->prox=topo;
	}
	printf("\nConcluido insercao ordenada");
	getch();
	system("cls");
	
}
void inserePosicao()
{
	int i;

	printf("\nDigite a posicao para inserir:");
	scanf("%d",&i);
	
	no* novo;
				
	novo = (no*)malloc(sizeof(no));
				
	valor++;
	novo->dado=valor;
	
	if(topo == NULL)
	{
		novo->prox=novo;
		topo = novo;
		printf("\nConcluido insercao inicio",i);
	}
	else
	{
		int cont=0;
		
		if(i == 0)
		{

			no *aux = topo;
					
			while(aux->prox != topo)
			{
				aux= aux->prox;
			}		
			aux->prox=novo;
			novo->prox=topo;
			topo = novo;
			
			printf("\nConcluido insercao inicio");
						
		}					
		else
		{
			no *aux=topo;
			do
			{
				aux = aux->prox;
				cont++;
				
			}while(aux!=topo);
			
			if(cont > i)
			{
	
				no *depois=topo,*antes;
				cont = 0;
					
				while(cont < i)
				{
					antes = depois;
					depois = depois->prox;
					cont++;
				}
				
				antes->prox=novo;
				novo->prox=depois;		
			
				printf("\nConcluido insercao meio");
					
			}
			else
			{

				no *aux=topo;
			
				while(aux->prox != topo)
				{
					aux=aux->prox;
				}
				aux->prox=novo;
				novo->prox=topo;
				printf("\nConcluido insercao fim",i);
				
				
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
		no *aux = topo;
		if(aux == aux->prox)
		{
			free(aux);
			topo = NULL;
			printf("\nConcluido remocao unico no");
		}
		else
		{
			while(aux->prox!=topo)
			{
				aux = aux->prox;
			}
			
			no *inicio = topo;
			
			aux->prox = inicio->prox;
			
			topo = inicio->prox;
			
			free(inicio);
			
			
		}
		printf("\nConcluido remocao inicio");
		
		

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
		no *aux=topo,*antes;
		
		if(aux==aux->prox)
		{
			free(aux);
			topo=NULL;
			printf("\nConcluido remocao unico no");
		}
		else
		{
			
			while(aux->prox!=topo)
			{
				antes = aux;
				aux = aux->prox;
			}
			
			antes->prox=aux->prox;
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
			topo=NULL;
			printf("\nConcluido remocao unico no");
		}
		else
		{
			no *antes;
			
			antes = aux;
			
			aux = aux->prox;
			
			antes->prox=aux->prox;
			
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
		
		no *aux = topo,*antes;
		int i,cont=0;
		
		printf("Digite a posicao para excluir:");
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
				while(aux->prox!=topo)
				{
					aux = aux->prox;
				}
				
				no *inicio = topo;
				
				aux->prox = inicio->prox;
				
				topo = inicio->prox;
				
				free(inicio);
				
				printf("\nConcluido remocao inicio");
				
				
			}
	
		}
		else
		{
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
					antes = aux;
					aux=aux->prox;
				}
		
				antes->prox=aux->prox;
					
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
void removeId()
{
	if(topo == NULL)
	{
		printf("\nLista Vazia");
		
	}
	else
	{
		int i;
		
		printf("Digite o ID para excluir:");
		scanf("%d",&i);
		
		no *aux=topo,*antes;
		
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
						printf("\nConcluido remocao unico no");
						break;
					}
					else
					{
						
						aux = topo;
						
						while(aux->prox!=topo)
						{
							aux = aux->prox;
						}
							
						no *inicio = topo;
							
						aux->prox = inicio->prox;
							
						topo = inicio->prox;
							
						free(inicio);
						
						printf("\nConcluido remocao inicio");
				
						
					}
					
				}
				else
				{
					antes->prox = aux->prox;
					free(aux);
					printf("\nConcluido remocao meio");
				}
	
	
			}
			else
			{
				antes = aux;
				aux=aux->prox;
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
		no* aux = topo;
		
		do
		{
		
			printf("\n\nEndereco:%x \nDado:%d \nProxEndereco:%x",aux,aux->dado,aux->prox);
			aux = aux->prox;
				
		
		}while(aux != topo);
		
		
	}
	getch();
	system("cls");

	
}
void OrdenaCresc()
{
	if(topo == NULL)
	{
		printf("\nLista Vazia");
	}
	else
	{
		no *aux,*antes,*depois=topo;
		int aux2;
		
		while(depois->prox !=topo)
		{
			depois = depois->prox;
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
		
		printf("\nConcluido");
		
	}
	getch();
	system("cls");
	
}
void trocaPosicoes()
{
	if(topo==NULL)
	{
		printf("\nLista Vazia");
	}
	else
	{
		no *inicio=topo,*depois=topo,*antes,*depois2=topo,*antes2,*aux=topo;
		int i,j,cont=0;
		
		printf("Digite a posicao i que deseja alterar:");
		scanf("%d",&i);
		
		do
		{
			printf("\nDigite a posicao j que deseja alterar pela posicao i=%d:",i);
			scanf("%d",&j);
			
			if(j == i)
			{
				printf("\nPosicoes devem ser diferentes");
			}
			
		}while(j==i);
		
			
		/*	if(depois->prox == inicio)
			{
				depois->prox = inicio->prox;
				antes->prox = inicio;
				inicio->prox=depois;
				topo=depois;
				printf("\nConcluido if depois->prox == inicio");
				
			}
			else
			{
				if(inicio->prox == depois)
				{
					while(aux->prox!=inicio)
					{
						aux = aux->prox;
					}
					
					inicio->prox=depois->prox;
					depois->prox=inicio;
					aux->prox=depois;
					topo=depois;
					printf("\nConcluido if inicio->prox == depois");
					
				}
				else
				{
					while(aux->prox!=inicio)
					{
						aux = aux->prox;
					}
					aux->prox=depois;
					antes->prox=depois->prox;
					depois->prox=inicio->prox;
					inicio->prox=antes->prox;
					antes->prox=inicio;
					topo=depois;
					printf("\nConcluido if inicio->prox != depois");
					
					
					
				}
				
			}*/
			
			

			do
			{
				aux = aux->prox;
				cont++;
				
			}while(aux!=topo);
			
			if(cont > i && cont > j)
			{
				if(i>j)
				{
					for(int k=0;k<i;k++)
					{
						antes = depois;
						depois = depois->prox;
					}
					for(int k=0;k<j;k++)
					{
						antes2 = depois2;
						depois2 = depois2->prox;
					}
					
				}
				else
				{
					for(int k=0;k<j;k++)
					{
						antes = depois;
						depois = depois->prox;
					}
					for(int k=0;k<i;k++)
					{
						antes2 = depois2;
						depois2 = depois2->prox;
					}
				}
				if(depois->prox == depois2)
				{
					depois->prox = depois2->prox;
					antes->prox = depois2;
					depois2->prox=depois;
					topo=depois;
					printf("\nConcluido if depois->prox == antes2");
						
				}
				else
				{
						if(depois2->prox == depois)
						{
							if(depois2 == inicio)
							{
								antes2=topo;
								while(antes2->prox!=topo)
								{
									antes2=antes2->prox;
								}
								depois2->prox=depois->prox;
								depois->prox=depois2;
								antes2->prox=depois;
								topo=depois;
							}	
							else
							{
	
								depois2->prox=depois->prox;
								depois->prox=depois2;
								antes2->prox=depois;
							}
							
							printf("\nConcluido if depois2->prox == depois");
						}
						else
						{
							
							if(depois2 == inicio)
							{
								antes2=topo;
								while(antes2->prox!=topo)
								{
									antes2=antes2->prox;
								}
								
								antes->prox=depois->prox;
								depois->prox=depois2->prox;
								depois2->prox=antes->prox;
								antes->prox=depois2;
								antes2->prox=depois;
								topo=depois;
							}
							else
							{	
								antes2->prox=depois;
								antes->prox=depois->prox;
								depois->prox=depois2->prox;
								depois2->prox=antes->prox;
								antes->prox=depois2;
							}
							
							printf("\nConcluido if depois2->prox != depois");
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
		no *atual=topo->prox,*depois,*fim=topo;
		
		while(fim->prox!=topo)
		{
			fim = fim->prox;
		}
		
		topo->prox=fim;
	
		while(atual!=fim)
		{
			depois=atual->prox;
			atual->prox=topo;
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
void concatena()
{
	if(topo == NULL)
	{
		printf("\nLista Vazia");
	}
	else
	{
		no *topo2=NULL;
		no *novo = (no*)malloc(sizeof(no));
		no *novo2 = (no*)malloc(sizeof(no));
		valor++;
		novo->dado=valor;
		novo->prox=novo;
		topo2=novo;
		valor++;
		novo2->dado=valor;
		novo2->prox=topo2;
		topo2->prox=novo2;
		topo2=novo2;
		
		no *fim=topo;
		while(fim->prox!=topo)
		{
			fim = fim->prox;
		}
		fim->prox=topo2;
		
		fim=topo2;
		while(fim->prox!=topo2)
		{
			fim = fim->prox;
		}
		fim->prox=topo;
		
		no *aux=topo;
		do
		{
			printf("\n\nEndereco:%x \nDado:%d \nProxEndereco:%x",aux,aux->dado,aux->prox);
			aux = aux->prox;
		}while(aux != topo);
				
	}
	getch();
	system("cls");
}
void intercala()
{
	if(topo == NULL)
	{
		printf("\nLista Vazia");
	}
	else
	{
		no *topo2=NULL;
		no *novo = (no*)malloc(sizeof(no));
		no *novo2 = (no*)malloc(sizeof(no));
		valor++;
		novo->dado=valor;
		novo->prox=novo;
		topo2=novo;
		valor++;
		novo2->dado=valor;
		novo2->prox=topo2;
		topo2->prox=novo2;
		topo2=novo2;
		
		no *aux=topo,*aux2=topo2;
		no *depois=topo->prox,*depois2=topo2->prox;

		

		
		while(depois!=topo && depois2!=topo2)
		{
			aux->prox=aux2;
			aux2->prox=depois;
			aux=depois;
			depois = depois->prox;
			aux2=depois2;
			depois2=depois2->prox;
		}
		aux->prox=aux2;
		aux2->prox=topo;

		aux = topo;
		do
		{
			printf("\n\nEndereco:%x \nDado:%d \nProxEndereco:%x",aux,aux->dado,aux->prox);
			aux = aux->prox;
		}while(aux != topo);
		
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
		printf("\n LISTA CIRCULAR ENCADEADA");
		printf("\n=====================================\n");
		printf("\n1 - Insercoes");
		printf("\n2 - Remocoes");
		printf("\n3 - Lista");
		printf("\n4 - Ordena Elementos na forma Crescente");
		printf("\n5 - Troca posicoes");
		printf("\n6 - Inverte");
		printf("\n7 - Concatena");
		printf("\n8 - Intercala");
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
					printf("\n4 - Insere Ordenado");
					printf("\n5 - Insere Posicao");
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
							insereOrdenado();
							break;
						case 5:
							inserePosicao();
							break;	
							
					}
					
				}while(op2!=NULL);
				system("cls");
				break;
				
			case 2:
				system("cls");
				int op3;
				do
				{
		
					printf("\n1 - Remove inicio");
					printf("\n2 - Remove fim");
					printf("\n3 - Remove meio");
					printf("\n4 - Remove pela posicao");
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
							removeId();
							break;	
							
					}
					
				}while(op3!=NULL);
				system("cls");
				break;
	
							
			case 3:
				lista();	
				break;
				
			case 4:
				OrdenaCresc();
				break;
				
			case 5:
				trocaPosicoes();
				break;	
			
			case 6:
				inverte();
				break;
			
			case 7:
				concatena();
				break;			
			case 8:
				intercala();
				break;	
			
		}
	
		
	}while(op!=0);
	
	
	
}
