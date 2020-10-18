#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h> 


typedef struct no
{
	
	no *ant;
	int dado;
	no *prox;
	
}no;

no *topo=NULL;
no *topo2=NULL;

int valor;

void insereInicio()
{
	no *novo = (no*) malloc(sizeof(no));
	
	novo->prox=topo;
	novo->ant=NULL;
	valor++;
	novo->dado=valor;
	
	if(topo == NULL)
	{
		topo = novo;
		printf("\nConcluido 1");
		
	}
	else
	{
		topo->ant = novo;
		topo = novo;
		printf("\nConcluido 2");
		
	}
	

	getch();
	system("cls");
	
	
	
}
void insereFim()
{
	if(topo == NULL)
	{
		
		printf("\nLista Vazia");
	}
	else
	{
		no *novo,*aux=topo;
		
		novo = (no*) malloc(sizeof(no));
		
		novo->prox = NULL;
		valor++;
		novo->dado = valor;
		
		while(aux->prox != NULL)
		{
			
			aux = aux->prox;
			
		}
		
		aux->prox = novo;
		novo->ant = aux;
		
		printf("\nConcluido");
		
	}
	getch();
	system("cls");

}
void insereMeio()
{
	if(topo == NULL)
	{
		printf("\nLista Vazia");
	}
	else
	{
		no *aux=topo,*antes;
		
		antes=aux;
		
		aux=aux->prox;
		
		no* novo = (no*)malloc(sizeof(no));
		
		valor++;
		
		if(aux == NULL)
		{
			novo->dado=valor;
			antes->prox=novo;
			novo->ant=antes;
			novo->prox=aux;
		}
		else
		{
		
			antes->prox=novo;
			
			aux->ant = novo;
			
			novo->prox=aux;
			
			novo->ant=antes;
			
			
		}

		
		printf("\nConcluido");
		
	}
	getch();
	system("cls");
	
	
	
}
void insereOrdenado()
{
	no *novo;
	
	novo = (no*) malloc(sizeof(no));
	
	valor++;
	novo->dado=valor;
	novo->prox=NULL;
	
	if(topo == NULL)
	{
	
		novo->ant=NULL;
		topo = novo;
		printf("\nConcluido insere inicio 1");
		
	}
	else
	{
		no *aux = topo;
		while(aux->prox != NULL)
		{
			aux = aux->prox;
			
		}
		aux->prox=novo;
		novo->ant=aux;

		printf("\nConcluido insere inicio 2");
		
		
	}
	
	getch();
	system("cls");
	
	
}
void inserePosicao()
{
	int i;
	
	no *novo = (no*) malloc(sizeof(no));
	valor++;
	novo->dado=valor;
	
	printf("Digite a posicao para alocar:");
	scanf("%d",&i);
	
			
	if(topo == NULL)
	{
		novo->prox=topo;
		novo->ant=NULL;
		topo = novo;
		printf("\nConcluido 1 Insere Inicio");
		
	}
	else
	{
	
		if(i == 0)
		{
		
			novo->prox=topo;
			novo->ant=NULL;
			topo->ant = novo;
			topo = novo;
			printf("\nConcluido 2 Insere Inicio");
				
			
		}
		else
		{
			no* aux = topo;
			int cont=0;
			
			while(aux != NULL)
			{
				
				aux = aux->prox;
				cont++;
				
			}
			
			if(cont > i)
			{
				no* atual=topo,*antes;
				cont=0;
				
				while(cont < i)
				{
					antes = atual;
					atual = atual->prox;
					cont++;
					
					
				}
				
				antes->prox = novo;
				novo->ant = antes;	
				atual->ant = novo;
				novo->prox = atual;
				

				printf("\nConcluido Insere Meio");

			}
			else
			{
				no *aux2 = topo;
				
				while(aux2->prox != NULL)
				{
					aux2 = aux2->prox;
					
				}
				aux2->prox=novo;
				novo->ant=aux2;
				novo->prox=NULL;
				
				printf("\nConcluido Insere Fim");
					
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
		
		if(aux->prox == NULL)
		{
			topo = aux->prox;
			printf("\nConcluido Remocao Inicio 1");
			
		}
		else
		{
			topo = aux->prox;
			aux->prox->ant = NULL;
			printf("\nConcluido Remocao Inicio 2 ");
			
		}
		
		free(aux);
	}
	
	
	/* SEGUNDA FORMA
	if(topo == NULL)
	{
		printf("\nLista Vazia");
		
	}
	else
	{
		no *aux=topo,*depois;

		if(aux->prox == NULL)
		{
			topo = aux->prox;
			printf("\nConcluido Remocao Inicio 1");
		}
		else
		{
			depois = aux->prox;
			depois->ant = NULL;
			topo = depois;
			
			printf("\nConcluido Remocao Inicio 2 ");
				
		}
		
		free(aux);

		
	}*/
	
	
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
			
		while(aux->prox != NULL)
		{
			aux = aux->prox;
				
		}
		
		if(aux->ant == NULL)
		{
			
			topo=aux->prox;
			
			printf("\nConcluido Remocao Inicio");
			
		}
		else
		{
			
			aux->ant->prox=aux->prox;//Ou NULL
			printf("\nConcluido remocao fim");
			
		}
		free(aux);
		
	
			
	
	
		
	}
	/*
	if(topo == NULL)
	{
		printf("\nLista Vazia");
		
	}
	else
	{
		no *aux=topo,*antes;
		
		if(aux->prox == NULL)
		{
			topo = aux->prox;
			free(aux);
			printf("\nConcluido Remocao Inicio");
			
			
		}
		else
		{
	
			while(aux->prox != NULL)
			{
				antes = aux;
				aux = aux->prox;
					
			}
			
			antes->prox = NULL;
			free(aux);
			printf("\nConcluido remocao fim");
	
			
	
	
		
		}


	}*/
	
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

		if(aux->prox == NULL)
		{
			
			topo = aux->prox;
			
			printf("\nConcluido Remocao Inicio");
		}
		else
		{
			aux = aux->prox;
			
			aux->ant->prox = aux->prox;
			
			if(aux->prox != NULL)
			{
				aux->prox->ant = aux->ant;
			}
		
			printf("\nConcluido Remocao Meio");
		}

		free(aux);
			
		
			
		/* 2 FORMA
			while(atual!=NULL)
			{
				antes = atual;
				atual = atual->prox;
				cont++;
				
				if(cont > 0)
				{
					depois = atual->prox;
					free(atual);
					
					if(depois == NULL)
					{
						antes->prox = depois;
					}
					else
					{
						antes->prox = depois;
						depois->ant = antes;
					}
		
					printf("\nConcluido Remocao Meio");
					break;
					
					
					
				}
	
				
			}*/
			
			
			
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
		printf("Digite a posicao que deseja excluir:");
		scanf("%d",&i);
		
		if(i == 0)
		{
			if(aux->prox == NULL)
			{
				topo = aux->prox;
				free(aux);
				printf("\nConcluido Remocao Inicio 1");
				
			}
			else
			{
				topo = aux->prox;
				aux->prox->ant = aux->ant;
				free(aux);
				printf("\nConcluido Remocao Inicio 2");
			}


			
		}
		else
		{
			
			int cont=0;
			
			while(aux!=NULL)
			{
				aux = aux->prox;
				cont++;
				
			}
			
			if(cont > i)
			{
				no *aux2=topo;
				
			    cont=0;
				while(cont < i)
				{
					aux2 = aux2->prox;
					cont++;
					
					
				}
				
			    aux2->ant->prox = aux2->prox;
			    
			    if(aux2->prox != NULL)
			    {
			    	aux2->prox->ant=aux2->ant;
				}
				free(aux2);
				
				printf("\nConcluido remocao meio");
				
		
			
				
				
			}
			else
			{
				printf("\nPosicao invalida");
				
			}
			
			
			
		}
		
	
	
	
	/*	int i;
		printf("Digite a posicao que deseja excluir:");
		scanf("%d",&i);
		
		if(i == 0)
		{
			no *aux;
			
			if(topo->prox == NULL)
			{
				aux = topo;
				topo = aux->prox;
				free(aux);
				printf("\nConcluido Remocao Inicio 1");
				
			}
			else
			{
				
				aux = topo;
				topo = aux->prox;
				free(aux);
				topo->ant=NULL;
				printf("\nConcluido Remocao Inicio 2");
			}


			
		}
		else
		{
			no *aux=topo;
			int cont=0;
			
			while(aux!=NULL)
			{
				aux = aux->prox;
				cont++;
				
			}
			
			if(cont > i)
			{
				no *atual=topo,*antes,*depois;
				int cont2=0;
				while(cont2 < i)
				{
					antes = atual;
					atual = atual->prox;
					cont2++;
					
					
				}
				
				depois = atual->prox;
				free(atual);
				if(depois == NULL)
				{
					antes->prox = depois;
					printf("\nConcluido remocao fim");
				}
				else
				{
				
					antes->prox = depois;
					depois->ant = antes;
					printf("\nConcluido remocao meio");
				}
				
			
				
				
			}
			else
			{
				printf("\nPosicao invalida");
				
			}
			
			
			
		}*/
		
		
		
		
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
		no *aux=topo;
		
		while(aux!=NULL)
		{
			printf("\n---------------------\nEnderecoAnt:%x \nEndereco:%x \nDado:%d \nProxEndereco:%x",aux->ant,aux,aux->dado,aux->prox);
			aux = aux->prox;
			
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
		
		no*aux=topo;
		int info;
		
		printf("Digite o ID que deseja excluir:");
		scanf("%d",&info);
		
		while(aux!=NULL)
		{
			if(aux->dado == info)
			{
				if(aux == topo)
				{
				
					if(aux->prox == NULL)
					{
						topo = aux->prox;
						free(aux);
						printf("\nConcluido remocao inicio");
						break;
		
					}
					else
					{
						topo = aux->prox;
						aux->prox->ant = aux->ant;
						free(aux);
						printf("\nConcluido Remocao Inicio 2");
						break;
						
						
					}
				}
				else
				{
					aux->ant->prox=aux->prox;
					
					if(aux->prox!= NULL)
					{
						aux->prox->ant=aux->ant;
					
					}
					printf("\nConcluido remocao meio");
					free(aux);
						break;
		
				}	
				
			}
			else
			{
	
				aux=aux->prox;
				
			}	
			
		}
		if(aux == NULL)
		{
			printf("ID invalido");
			
		}
		
		
	
		
		
		/*no*atual=topo,*antes;
		int info;
		
		printf("Digite o ID que deseja excluir:");
		scanf("%d",&info);
		
		while(atual!=NULL)
		{
			if(atual->dado == info)
			{
				if(atual == topo)
				{
				
					if(topo->prox == NULL)
					{
		
						topo = atual->prox;
						free(atual);
						printf("\nConcluido remocao inicio");
						break;
		
					}
					else
					{
						topo = atual->prox;
						free(atual);
						topo->ant=NULL;
						printf("\nConcluido Remocao Inicio 2");
						break;
						
						
					}
				}
				else
				{
					no *depois;
					depois = atual->prox;
					free(atual);
						
					if(depois == NULL)
					{
						antes->prox = depois;
						printf("\nConcluido remocao fim");
						break;
					}
					else
					{
						antes->prox = depois;
						depois->ant = antes;
						printf("\nConcluido remocao meio");
						break;
					}
					
					
		
				}	
				
			}
			else
			{
				antes = atual;
				atual=atual->prox;
				
			}	
			
		}
		if(atual == NULL)
		{
			printf("ID invalido");
			
		}*/
	
		
		
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
		no *aux,*antes;
		int aux2;
	
		
		for(aux=topo;aux!=NULL;aux=aux->prox)
		{
			for(antes=aux->prox;antes!=NULL;antes=antes->prox)
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
	if(topo == NULL)
	{
		printf("\nListaVazia");
	}
	else
	{
		no *depois=topo,*antes=topo;
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
		
	/*	if(i == 0 || j == 0)
		{
			if(i==0)
			{
				for(int k=0;k<j;k++)
				{
					depois=depois->prox;
				}
			}
			if(j==0)
			{
				for(int k=0;k<i;k++)
				{
					depois=depois->prox;
				}
			}
	
			if(depois->prox == NULL)
			{
				depois->ant->prox=depois->prox;
				depois->prox=antes->prox;
				antes->ant=depois->ant;
				antes->ant->prox=antes;
				antes->prox=NULL;
				depois->prox->ant=depois;
				depois->ant=NULL;
				topo = depois;
				printf("\nConcluido troca de posicoes if auxj->prox == NULL");
					
			}
			else
			{
				if(antes->prox == depois)
				{
					antes->prox=depois->prox;
					depois->prox->ant=antes;
					depois->prox=antes;
					antes->ant=depois;
					depois->ant=NULL;
					topo = depois;
					printf("\nConcluido troca de posicoes if auxi->prox == auxj");
				}
				else
				{
					depois->ant->prox=depois->prox;
					depois->prox=antes->prox;
					antes->ant=depois->ant;
					antes->ant->prox->ant=antes;
					antes->prox=antes->ant->prox;
					antes->ant->prox=antes;
					depois->prox->ant=depois;
					depois->ant=NULL;
					topo = depois;
					printf("\nConcluido troca de posicoes if auxi->prox != auxj");
			
				}
					
					
			}		
			
		}*/

	
			no *contnos=topo;
			
			while(contnos!=NULL)
			{
				contnos = contnos->prox;
				cont++;
			}
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
				if(j>i)
				{	
					for(int k=0;k<i;k++)
					{
						antes=antes->prox;
						
					}
					for(int k=0;k<j;k++)
					{
						depois=depois->prox;
					}					
						
				}		
				if(antes->prox==depois)
				{
					
					if(antes->ant==NULL)
					{
						antes->prox=depois->prox;
						depois->ant=antes->ant;
						antes->prox->ant=antes;
						depois->prox=antes;
						antes->ant=depois;
						topo=depois;
						
					}
					else
					{
						depois->ant->prox=depois->prox;
						depois->ant=antes->ant;
						depois->ant->prox->ant=depois;
						depois->prox=depois->ant->prox;
						depois->ant->prox=depois;
					}
					
					printf("\nConcluido if auxj->prox == auxi");
				}
				else
				{
					
					if(antes->ant==NULL)
					{
						depois->ant->prox=depois->prox;
						antes->prox->ant=antes->ant;
						depois->prox=antes->prox;
						antes->ant=depois->ant;
						antes->prox=antes->ant->prox;
						antes->ant->prox=antes;
						depois->ant=depois->prox->ant;
						depois->prox->ant=depois;
						topo=depois;
						
					}
					else
					{
					
						depois->ant->prox=depois->prox;
						antes->prox->ant=antes->ant;
						depois->prox=antes->prox;
						antes->prox=depois->ant->prox;
						depois->ant->prox=antes;
						antes->ant=depois->ant;
						depois->prox->ant->prox=depois;
						depois->ant=depois->prox->ant;
						depois->prox->ant=depois;
						
					}
					
					printf("\nConcluido if auxj->prox != auxi");
				}
				if(antes->prox!=NULL)
				{
					antes->prox->ant=antes;
				}	
				
			}
				
				
		
		
	}
	getch();
	system("cls");
}
void inverter()
{
	if(topo == NULL)
	{
		printf("\nLista Vazia");
	}
	else
	{
		no *aux = topo->prox;
		no *depois;
		
		topo->prox=NULL;
		
		while(aux!=NULL)
		{
			depois = aux->prox;
			topo->ant=aux;
			aux->prox=topo;
			aux->ant=NULL;
			topo=aux;
			aux=depois;
			
		}
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
		no* novo=(no*)malloc(sizeof(no));
		no* novo2=(no*)malloc(sizeof(no));
		
		valor++;
		novo->dado=valor;
		novo->prox=topo2;
		topo2=novo;
		
		valor++;
		novo2->dado=valor;
		novo2->prox=topo2;
		topo2=novo2;
		
		no *fim=topo;
		while(fim->prox!=NULL)
		{
			fim = fim->prox;
		}
		fim->prox=topo2;
		topo2->ant=fim;
		
		no *aux = topo;
		while(aux!=NULL)
		{
			printf("\n\nEndereco:%x \nID:%d \nProxEndereco: %x",aux,aux->dado,aux->prox);
			aux = aux->prox;
		}
		
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
		no* novo=(no*)malloc(sizeof(no));
		no* novo2=(no*)malloc(sizeof(no));
		
		valor++;
		novo->dado=valor;
		novo->prox=topo2;
		topo2=novo;
		
		valor++;
		novo2->dado=valor;
		novo2->prox=topo2;
		topo2=novo2;
		
		no *aux=topo,*aux2=topo2;
		no *depois=topo->prox,*depois2=topo2->prox;
		while(depois != NULL && depois2 != NULL)
		{
			aux->prox=aux2;
			aux2->prox=depois;
			aux=depois;
			depois=depois->prox;
			aux2=depois2;
			depois2=depois2->prox;
		}
		aux->prox=aux2;
		aux = topo;
		while(aux!=NULL)
		{
			printf("\n\nEndereco:%x \nID:%d \nProxEndereco: %x",aux,aux->dado,aux->prox);
			aux = aux->prox;
		}
		
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
		printf("\n LISTA DUPLAMENTE ENCADEADA ");
		printf("\n=====================================\n");
		printf("\n1- Insercoes");
		printf("\n2 - Remocoes");
		printf("\n3 - Lista");
		printf("\n4 - Verifica ordem dos elementos");
		printf("\n5 - Troca posicoes");
		printf("\n6 - Inverter");
		printf("\n7 - Concatena");
		printf("\n8 - Intercala");
		printf("\n0 - Sair");
		printf("\n\nEscolha:");
		scanf("%d",&op);
		
		switch(op)
		{
			case 1:
				system("cls");
				int op2;
				do
				{	
					printf("1 - Insere Inicio");
					printf("\n2 - Insere Fim");
					printf("\n3 - Insere Meio");
					printf("\n4 - Insere Ordenado");
					printf("\n5 - Insere Posicao");
					printf("\n0 - Sair");
					printf("\n\nEscolha:");
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
					
				}while(op2!=0);
				system("cls");
				break;
	
			case 2:
				
				system("cls");
				int op3;
				do
				{	
					printf("1 - Remove Inicio");
					printf("\n2 - Remove Fim");
					printf("\n3 - Remove Meio");
					printf("\n4 - Remove pela Posicao");
					printf("\n5 - Remove pelo ID");
					printf("\n0 - Sair");
					printf("\n\nEscolha:");
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
					
				}while(op3!=0);
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
				inverter();
				break;
				
			case 7:
				concatena();
				break;
				
			case 8:	
				intercala();
				break;			
					
		}
		
	}while(op !=0);
	
	
	
}


