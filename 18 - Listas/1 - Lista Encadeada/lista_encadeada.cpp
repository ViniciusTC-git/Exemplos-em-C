#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h> 


typedef struct no
{
	
	int id;
	no *prox;
	
}no;

no *topo=NULL;
no *topo2=NULL;
no *topo3=NULL;


int valor;

void insereInicio()
{
	no *inicio;

	
	inicio = (no*) malloc(sizeof(no));
	
	inicio->prox=topo;
	
	topo = inicio;
	
	valor++;
	
	inicio->id=valor;

		
	
	printf("\nConcluido");
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
		no* aux=topo;
		
		while(aux->prox != NULL)
		{
			aux = aux->prox;
			
		}
		
		no *fim;
		
		fim = (no*) malloc(sizeof(no));
		
		valor++;
		
		fim->id = valor;
    	
		fim->prox = NULL;
	
		aux->prox=fim;

		
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
		no* aux=topo,*antes;
		
		antes=aux;
		
		aux = aux->prox;
		
		no* meio = (no*) malloc(sizeof(no));
	
		antes->prox = meio;
		
		meio->prox = aux;
		
		valor++;
		
		meio->id = valor;
		
		printf("\nConcluido");
	
	}
	getch();
	system("cls");
	
}
void insereOrdenado()
{


	no *novo = (no*) malloc(sizeof(no));
	
	novo->prox = NULL;
	valor++;
	
	novo->id=valor;
	
	if(topo == NULL)
	{
		
		topo=novo;
	
		printf("\nConcluido inicio");
		
	}
	else
	{
		no* aux=topo;
		
		while(aux->prox != NULL)
		{
			aux = aux->prox;
			
		}
		
		aux->prox=novo;
		
		printf("\nConcluido fim");
		
		
	}
	
	
	getch();
	system("cls");
	

	
	
}
void inserePosicao()
{
		
	int i;
		
	no *novo;
	novo = (no*) malloc(sizeof(no));
	valor++;		
	novo->id=valor;
		
	printf("\nDigite a posicao para inserir:");
	scanf("%d",&i);

	if(i == 0 || topo == NULL)
	{
		novo->prox=topo;
				
		topo = novo;
				
		printf("\nConcluido insercao inicio");
	 		
	 		
	}
	else
	{
		int cont=0;
		no *aux=topo;
				
		while(aux!=NULL)
		{
			aux=aux->prox;
			cont++;
		}
			
		if(cont > i)
		{
			no *atual = topo, *antes;

		    cont = 0;
			        
			while(cont < i)
			{
			    antes = atual;	
			    atual = atual->prox;
			    cont++;
			}
			    
			antes->prox = novo;
			novo->prox = atual;
		
					        
		    printf("\nConcluido insercao meio");
			    
		}
		else
		{
		   	no *aux2=topo;
		   		
		   	while(aux2->prox != NULL)
			{
		   		aux2 = aux2->prox;
		   			
			}
				
			aux2->prox=novo;
			novo->prox=NULL;
				
			printf("\nConcluido insercao fim");
	
		}
	
	}
	getch();
	system("cls");

		
}
	
	

void lista()
{
	no *aux;
	
	int cont=0;
	
	aux = topo;
	
	if (aux == NULL)
	{
		
		printf("\nLista Vazia");
			
		
	}
	else
	{
		while(aux != NULL)
		{
			printf("\n\nEndereco:%x \nID:%d \nProxEndereco: %x",aux,aux->id,aux->prox);
			aux = aux->prox;
			cont++;				
			
		}
		
	
	}
	printf("\n\nNos alocados: %d",cont);
	getch();
	system("cls");
	
	
}
void busca()
{
	no *aux;
	
	int info=3;
	
	if (topo == NULL)
	{
		
		printf("Lista Vazia");
		
	}
	else
	{
		aux = topo;
		
		while(aux != NULL)
		{
			if(aux->id == info)
			{
				printf("\nID %d",aux->id);
				break;
				
				
			}
			else
			{
				
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
void altera()
{
	no *aux=topo;
	int info,info2;
	
	if(topo == NULL)
	{
		printf("\nLista Vazia");
		
	}
	else
	{

		
		printf("Digite o ID para alterar:");
		scanf("%d",&info);
		
		
		while(aux!=NULL)
		{
			if(aux->id == info)
			{
			
				printf("Dado:%d",aux->id);
				
				printf("\nDigite o novo id:");
				scanf("%d",&info2);
								
				aux->id = info2;
							
				printf("\nConcluido");
				
				break;
			
	
				
			}
			else
			{
				aux = aux->prox;
				
			}
		
			
		}
		if(aux == NULL)
		{
			
			
			printf("\nNao encontrado");
			
			
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

		topo = aux->prox;
		free(aux);
		printf("\nConcluido");
			
		
	}
	getch();
	system("cls");
	
}
void removeFim()
{

	if(topo==NULL)
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
			printf("\nConcluido 1");
			
		}
		else
		{
			
			while(aux->prox!=NULL)
			{
				antes = aux;
				aux = aux->prox;
			
			}
			free(aux);
			
			antes->prox=NULL;
			
			printf("Concluido 2");
			
		}

	
		
	}
	getch();
	system("cls");
	
	
}
void removeSegundo()
{
	

	
	if(topo == NULL)
	{
		
		printf("Lista Vazia");
	}
	else
	{
		no*aux=topo,*antes;
		
		if(aux->prox == NULL)
		{
			topo = aux->prox;
			free(aux);
			printf("\nConcluido remocao inicio");
			
		}
		else
		{	
			antes = aux;
			
			aux = aux->prox;
			
			antes->prox = aux->prox;
			
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
		int i,cont=0;
		no *aux=topo;
		
		while(aux!=NULL)
		{
			aux=aux->prox;
			cont++;
		}
		
		
		printf("\nDigite a posicao para excluir:");
		scanf("%d",&i);

	
		
		if(cont > i)
		{
			no *antes,*atual=topo;
			int cont2=0;
			
			while(cont2 < i)
			{
			
				antes = atual;
				atual = atual->prox;
				cont2++;
			}
	
		
			
			if(atual == topo)
			{
				topo = atual->prox;
				free(atual);
				printf("\nConcluido 1 exclui inicio");
			}
			else
			{
				antes->prox=atual->prox;
				free(atual);
					
				printf("\nConcluido 2 excluiu meio ");
							
			}
			
		
		
		}
		else
		{
		
			printf("Posicao nao encontrada");
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
		no* aux=topo;
		no* antes;
		int info;
		
		printf("\nDigite o ID para excluir:");
		scanf("%d",&info);
		
		while(aux != NULL)
		{
			if(aux->id == info)
			{
				if(aux == topo)
				{
					
					topo = aux->prox;
					free(aux);
					printf("\nConcluido 1 exclui inicio");
					break;
					
				}
				else
				{
					
					antes->prox = aux->prox;
					free(aux);
					printf("\nConcluido 2 exclui meio");
					break;
					
					
				}
			}
			else
			{
	
				antes = aux;
				aux = aux->prox;
				
				
			}
	
		}
		if(aux == NULL)
		{
		
			printf("\nNao achou");
		}
		
		
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
				if(aux->id > antes->id)
				{
					aux2=aux->id;
					aux->id=antes->id;
					antes->id=aux2;
					
				}
		
			}


		}
		
		printf("\nConcluido");
		getch();
		system("cls");
	
	}
}
void trocaPosicoes()
{
	if(topo == NULL)
	{
		printf("\nLista Vazia");
	}
	else
	{
		no *aux=topo,*antes,*depois=topo,*antes2,*depois2=topo;
		
		if(aux->prox == NULL)
		{
			printf("Erro! A lista possui apenas um no");
		}
		else
		{
			int i,j,cont=0;
			
			printf("Digite a primeira posicao que deseja alterar:");
			scanf("%d",&i);
			
			do
			{
				printf("\nDigite a segunda posicao que deseja alterar pela posicao %d:",i);
				scanf("%d",&j);
					
				if(j == i)
				{
					printf("\nPosicoes devem ser diferentes");
				}
				
			}while(j==i);
	
		
		
			/*	if(i==0)
				{
					for(int k=0;k<i;k++)
					{
						antes = depois;
						depois = depois->prox;
					}
					
				}
				if(j==0)
				{
					for(int k=0;k<j;k++)
					{
						antes = depois;
						depois = depois->prox;
					}
				
				}
					
				if(aux->prox == depois)
				{
					aux->prox=depois->prox;
					depois->prox=aux;
					topo = depois;
					printf("\nConcluido 1 troca de posicoes if aux->prox == depois");
				}
				else
				{
			
					if(depois->prox == NULL)
					{
						depois->prox=aux->prox;
						antes->prox=aux;
						aux->prox=NULL;
						topo = depois;
						printf("\nConcluido 1 troca de posicoes if depois->prox = NULL");
							
					}
					else
					{
						antes->prox=depois->prox;
						depois->prox=aux->prox;
						aux->prox=antes->prox;
						antes->prox=aux;
						topo = depois;
							
						printf("\nConcluido 1 troca de posicoes if aux->prox != depois");
							
					}
						
				}*/
					
			
		
				while(aux!=NULL)
				{
					aux=aux->prox;
					cont++;
				}
				
				if(cont > i && cont > j)
				{
					if(i > j)
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
					if(j > i)
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

					if(depois2->prox == depois)
					{
						if(depois2 == topo)
						{						
							depois2->prox=depois->prox;
							depois->prox=depois2;
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
					    if(depois2 == topo)
						{		
										
							antes->prox=depois->prox;
							depois->prox=depois2->prox;	
							depois2->prox=antes->prox;
							antes->prox=depois2;
							topo=depois;
						}
						else
						{

							antes->prox=depois->prox;
							depois->prox=depois2->prox;
							depois2->prox=antes->prox;
							antes->prox=depois2;
							antes2->prox=depois;
						}
						printf("\nConcluido if depois2->prox == depois");
					
					}		
						
				}
	
			
		}
	}
	

	getch();
	system("cls");
	
}
void limpa()
{
	
	
	if(topo == NULL)
	{
		
		printf("Lista Vazia");
	}
	else
	{
		no *aux=topo;
		
		while(aux!=NULL)
		{
			aux = topo;
			topo=topo->prox;
			free(aux);
			
		}
		topo = NULL;
	
		valor = 0;
	

		printf("\nConcluido");
	}
	getch();
	system("cls");	
	
}
void inverterNos()
{
	if(topo == NULL)
	{
		printf("\nLista Vazia");
	}
	else
	{
		no *antes=topo->prox;
		no *depois;

		topo->prox=NULL;
		
		while(antes!=NULL)
		{
			depois=antes->prox;
			antes->prox=topo;
			topo=antes;
			antes=depois;
	   }
	
		printf("\nConcluido");
		
	}
	getch();
	system("cls");
}
void concatena()
{
	
	no* novo=(no*)malloc(sizeof(no));
	no* novo2=(no*)malloc(sizeof(no));
	
	valor++;
	novo->id=valor;
	novo->prox=topo2;
	topo2=novo;
	
	valor++;
	novo2->id=valor;
	novo2->prox=topo2;
	topo2=novo2;
	
	no *aux=topo;
	while(aux->prox!=NULL)
	{
		aux =aux->prox;
	}
	aux->prox=topo2;
	topo2=NULL;
	
	printf("\nConcluido");
	
	getch();
	system("cls");
	
}
void intercala()
{
	no* novo=(no*)malloc(sizeof(no));
	no* novo2=(no*)malloc(sizeof(no));
	
	valor++;
	novo->id=valor;
	novo->prox=topo2;
	topo2=novo;
	
	valor++;
	novo2->id=valor;
	novo2->prox=topo2;
	topo2=novo2;
	
	
	no *aux=topo,*aux2=topo2;
	no *depois=topo->prox,*depois2=topo2->prox;
	
	while(depois!= NULL && depois2!= NULL)
	{
		aux->prox=aux2;
		aux2->prox=depois;
		aux = depois;
		depois = depois->prox;
		aux2=depois2;
		depois2=depois2->prox;
	
	}
	
	aux->prox=aux2;
	
	aux = topo;
	
	while(aux!=NULL)
	{
		printf("\n\nEndereco:%x \nID:%d \nProxEndereco: %x",aux,aux->id,aux->prox);
		aux = aux->prox;
	}
	getch();
	system("cls");
	
	
}
void intercala2()
{
	no* novo=(no*)malloc(sizeof(no));
	no* novo2=(no*)malloc(sizeof(no));
	
	valor++;
	novo->id=valor;
	novo->prox=topo2;
	topo2=novo;
	
	valor++;
	novo2->id=valor;
	novo2->prox=topo2;
	topo2=novo2;
	
	
	no *aux=topo,*aux2=topo2;
	
	while(aux!= NULL && aux2!= NULL)
	{
		no* tnovo=(no*)malloc(sizeof(no));
		no* tnovo2=(no*)malloc(sizeof(no));
		
		valor++;
		tnovo->id=aux->id;
		tnovo->prox=topo3;
		topo3=tnovo;
	
		valor++;
		tnovo2->id=aux2->id;
		tnovo2->prox=topo3;
		topo3=tnovo2;
		
		aux = aux->prox;
		aux2 = aux2->prox;	
	
	}
	while(aux!=NULL)
	{
		no* tnovo=(no*)malloc(sizeof(no));

		tnovo->id=aux->id;
		tnovo->prox=topo3;
		topo3=tnovo;
		aux = aux->prox;
		
	}
	while(aux2!=NULL)
	{
		no* tnovo2=(no*)malloc(sizeof(no));
	
		tnovo2->id=aux2->id;
		tnovo2->prox=topo3;
		topo3=tnovo2;
		aux2 = aux2->prox;
		
	}
	
	
	aux = topo;
	
	while(aux!=NULL)
	{
		printf("\n\nEndereco:%x \nID:%d \nProxEndereco: %x",aux,aux->id,aux->prox);
		aux = aux->prox;
	}


	
	getch();
	system("cls");
}
void copiarPVetor()
{
	if(topo == NULL)
	{
		printf("\nLista Vazia");
	}
	else
	{
		no *aux = topo;
		int cont=0,vetor[10];
		
		while(aux!=NULL)
		{
			vetor[cont]=aux->id;
			aux = aux->prox;
			cont++;
		
		}

		for(int i=0;i<cont;i++)
		{
	
			printf("\n%d",vetor[i]);
			
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
			printf("\n LISTA ENCADEADA ");
			printf("\n=====================================\n");
			printf("\n1 - Insercoes");
			printf("\n2 - Remocoes");
			printf("\n3 - Lista");
			printf("\n4 - Busca");
			printf("\n5 - Altera");
			printf("\n6 - Verifica ordem dos elementos");
			printf("\n7 - Troca posicoes dos nos");
			printf("\n8 - Inverter nos");
			printf("\n9 - Concatena topo com topo2");
			printf("\n10 - Intercala topo e topo2");
			printf("\n11 - Intercala topo e topo2 em topo3");
			printf("\n12 - Copia dados da lista para vetor");
			printf("\n13 - Limpa Memoria");
			printf("\n0 - Sair");
			printf("\nEscolha:");
			scanf("%d",&op);
			
			switch(op)
			{
				case 0:
					return 0;
					break;
					
				case 1:
					system("cls");
					
					int op1;
					do
					{
						
						
					    printf("\n1 - Insere Inicio");
						printf("\n2 - Insere Fim");
						printf("\n3 - Insere Meio");
						printf("\n4 - Insere Ordenado");
						printf("\n5 - Insere Posicao");
						printf("\n0 - Voltar");
				     	printf("\nEscolha:");
						scanf("%d",&op1);
					
						switch(op1)
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
						
					}while(op1!=0);
					system("cls");
					break;
					
				case 2:	
					system("cls");
					int op2;
					do
					{
						printf("\n1 - Remove Inicio");
						printf("\n2 - Remove Fim");
						printf("\n3 - Remove Segundo");
						printf("\n4 - Remove pela Posicao");
						printf("\n5 - Remove pelo ID");
						printf("\n0 - Voltar");
				     	printf("\nEscolha:");
						scanf("%d",&op2);
					
						switch(op2)
						{
							case 1:
								removeInicio();
								break;
							case 2:
								removeFim();
								break;
							case 3:	
								removeSegundo();
								break;
							case 4:
								removePosicao();
								break;
							case 5:
								removeId();
								break;		
		
									
						}
						
				
						
					}while(op2!=0);
					system("cls");
					break;	
	
				case 3:
					lista();
					break;
					
				case 4:
					busca();	
					break;
				case 5:
					altera();
					break;
					
				case 6:
					OrdenaCresc();				
					break;
					
				case 7:
					trocaPosicoes();
					break;
							
				case 8:
					inverterNos();
					break;	
				case 9:
					concatena();
					break;
					
				case 10:
					intercala();
					break;	
					
				case 11:
					intercala2();
					break;
				
				case 12:
					copiarPVetor();
					break;
									
				case 13:
					limpa();
					break;		
						
		
			}
			
		}while(op!=0);	
}

