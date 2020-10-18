#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

typedef struct no
{
	int dado;
	no *esq;
	no *dir;	
}no,*ArvBin;

typedef struct Pilha
{
	no *info;
	Pilha *prox;
	
}pilha;
pilha *topo =NULL;

ArvBin* criaArv()
{
	ArvBin* raiz = (ArvBin*)malloc(sizeof(ArvBin));
	if(raiz!=NULL)
	{
		*raiz=NULL;
	 	printf("Raiz Alocada");
	}
	return raiz;
}

void liberaNo(no* no)
{
	if(no == NULL)
	{
		printf("\nArvore Vazia");
	}
	else
	{	
		liberaNo(no->esq);
		liberaNo(no->dir);
		free(no);
		no = NULL;
	}

	
}
void liberaArv(ArvBin* raiz)
{
	if(raiz == NULL)
	{
		printf("\nArvore Vazia");
	}
	else
	{
		liberaNo(*raiz);
		free(raiz);
	}
	
}
void inserir(ArvBin* raiz,int valor)
{
	no *novo = (no*)malloc(sizeof(no));
	novo->dado=valor;
	novo->esq=novo->dir=NULL;
		
	if(*raiz == NULL)
	{
		*raiz=novo;
	}
	else
	{
		no *atual = *raiz;
		no *ant = NULL;
		
		while(atual != NULL)
		{
			ant = atual;
			if(valor>atual->dado)
			{
				atual = atual->dir;
			}
			else
			{
				atual = atual->esq;
			}
	
		}
		if(valor > ant->dado)
		{
			ant->dir = novo;	
		}
		else
		{
			ant->esq = novo;
		}
			
	}
	printf("\nConcluido insercao");
	
}
void empilha(no* aux)
{
	pilha *novo = (pilha*)malloc(sizeof(pilha));
	
	novo->info = aux;
	novo->prox=topo;
	topo =novo;
}
no* desempilha()
{
   if(topo!=NULL)
 	{
 		no* aux;
		pilha *aux2=topo;
		topo = aux2->prox;
		aux = aux2->info;
		free(aux2);
		return aux;
	}	
}

int vazia()
{
 	if(topo == NULL)
 	{
 		return 1;
	}
	else
	{
		return 0;
	}
}
void preordem (ArvBin* raiz)
{
	
	no *aux = *raiz;
	//ITERATIVO PILHA 1
	while(1)
	{
		if(aux!=NULL)
		{
			printf("\n----------------\n\nEndereco:%x  \n  Dado:%d\nEsq:%x  Dir:%x",aux,aux->dado,aux->esq,aux->dir);
			if(aux->dir!=NULL)
			{
				empilha(aux->dir);
			}
			aux = aux->esq;
		}
		else if(vazia())
		{
			break;
		}
		else
		{
			aux = desempilha();
		}
		
	}

	
/*	ITERATIVO PILHA 2
	no *aux = *raiz;
	empilha(aux);
	while(!vazia())
	{
		aux = desempilha();
		if(aux!=NULL)
		{
			printf("\n----------------\n\nEndereco:%x  \n  Dado:%d\nEsq:%x  Dir:%x",aux,aux->dado,aux->esq,aux->dir);
			if(aux->dir!=NULL)
			{
				empilha(aux->dir);
			}
			if(aux->esq!=NULL)
			{
				empilha(aux->esq);
			}
		}
		
	}*/
 	
	/* RECURSAO
	if(*raiz != NULL)
	{
		printf("\n----------\n\n  Endereco:%x \n  Dado:%d \n\nEsq:%x  Dir:%x",*raiz,(*raiz)->dado,(*raiz)->esq,(*raiz)->dir);
		preordem(&((*raiz)->esq));
		preordem(&((*raiz)->dir));
	}
	*/

	
}
void emordem(ArvBin* raiz)
{
	no *aux=*raiz;
	while(aux!=NULL || !vazia())
	{
		if(aux!=NULL)
		{
			empilha(aux);
			aux = aux->esq;
		}
		else
		{
			aux = desempilha();
			printf("\n----------------\n\nEndereco:%x  \n  Dado:%d\nEsq:%x  Dir:%x",aux,aux->dado,aux->esq,aux->dir);
			aux = aux->dir;
		}	
		
	}
	
	
	
/*	if(*raiz != NULL)
	{
		
		emordem(&((*raiz)->esq));
		printf("\n----------\n\n  Endereco:%x \n  Dado:%d \n\nEsq:%x  Dir:%x",*raiz,(*raiz)->dado,(*raiz)->esq,(*raiz)->dir);
		emordem(&((*raiz)->dir));
	}*/
}
void posordem(ArvBin* raiz)
{
	no *aux=*raiz;
	do
	{
		while(aux!=NULL)
		{
			if(aux->dir!=NULL)
			{
				empilha(aux->dir);
			}
			empilha(aux);
			aux = aux->esq;	
		}
		aux = desempilha();
		if(aux->dir!=NULL && topo!=NULL && topo->info == aux->dir)
		{
			desempilha();
			empilha(aux);
			aux = aux->dir;
		}
		else
		{
			printf("\n----------------\n\nEndereco:%x  \n  Dado:%d\nEsq:%x  Dir:%x",aux,aux->dado,aux->esq,aux->dir);
			aux = NULL;	
		}
		
	}while(!vazia());
	

	
/*  RECURSAO
	if(*raiz != NULL)
	{
		
		posordem(&((*raiz)->esq));
		posordem(&((*raiz)->dir));
		printf("\n----------\n\n  Endereco:%x \n  Dado:%d \n\nEsq:%x  Dir:%x",*raiz,(*raiz)->dado,(*raiz)->esq,(*raiz)->dir);
	}*/
}
void buscar(ArvBin* raiz,int valor)
{
	if(*raiz==NULL)
	{
		printf("\nArvore Vazia");
	}
	else
	{
		no *aux=*raiz;
		while(aux!=NULL)
		{
			if(aux->dado == valor)
			{
				printf("\n----------\n\n  Endereco:%x \n  Dado:%d \n\nEsq:%x  Dir:%x",aux,aux->dado,aux->esq,aux->dir);
				break;
			}
			else
			{
				if(valor > aux->dado)
				{
					aux = aux->dir;
				}
				else
				{
					aux = aux->esq;
				}
			}	
		}
		if(aux == NULL)
		{
			printf("\nDado nao encontrado");
		}
	}
}
/*no* remove_atual(no *atual)
{
	no *no1, *no2;
	if(atual->esq == NULL)
	{
		no2 = atual->dir;
		free(atual);
		return no2;
	}
	no1 = atual;
	no2 = atual->esq;
	while(no2->dir !=NULL)
	{
		no1 = no2;
		no2 = no2->dir;
	}
	if(no1 != atual)
	{
		no1->dir = no2->esq;
		no2->esq = atual->esq;
	}
	no2->dir=atual->dir;
	free(atual);
	return no2;
	
}
*/
void remover(ArvBin* raiz,int valor)
{
	

/*	if(*raiz==NULL)
	{
		printf("\nArvore vazia");
	}
	else
	{
		no *atual=*raiz;
		no *antes=NULL;
		while(atual!=NULL)
		{
			if(valor == atual->dado)
			{
				if(atual == *raiz)
				{
					*raiz = remove_atual(atual);
				}
				else
				{
					if(antes->dir == atual)
					{
						antes->dir = remove_atual(atual);
					}
					else
					{
						antes->esq = remove_atual(atual);
					}
				}
				break;
			}
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
	}*/
	
}
void menor(ArvBin *raiz)
{
	if(*raiz!=NULL)
	{
		no *aux = *raiz;
		
		while(aux->esq!=NULL)
		{
			aux = aux->esq;
		}
		
		printf("Menor da esquerda:%d",aux->dado);
		
		if((*raiz)->esq!= NULL)
		{
			aux = (*raiz)->esq;
			while(aux->dir!=NULL)
			{
				aux = aux->dir;
			}
			printf("\nMaior da esquerda:%d",aux->dado);
		}
	}
}
void maior(ArvBin *raiz)
{
	if(*raiz!=NULL)
	{
		no *aux=*raiz;
		
		while(aux->dir!=NULL)
		{
			aux = aux->dir;
		}
		printf("Maior da Direita:%d",aux->dado);
		if((*raiz)->dir != NULL)
		{
			aux = (*raiz)->dir;
			
			while(aux->esq!=NULL)
			{
				aux = aux->esq;
			}
		
			printf("\nMenor da Direita:%d",aux->dado);
		}
	}
}
int totalnos(ArvBin *raiz)
{
	if(*raiz!=NULL)
	{
	
		int contesq = totalnos(&((*raiz)->esq));
		int contdir = totalnos(&((*raiz)->dir));
		
		return (contesq + contdir + 1);
	}
}
int altura(ArvBin *raiz)
{
	if(*raiz!=NULL)
	{
		int altesq = altura(&((*raiz)->esq));
		int altdir = altura(&((*raiz)->dir));
		
		if(altesq > altdir)
		{
			return altesq + 1;
		}
		else
		{
			return altdir + 1;
		}
	}
}
void troca(ArvBin *raiz)
{
	if(*raiz !=NULL)
	{
		no *aux = (*raiz)->dir;
		(*raiz)->dir=(*raiz)->esq;
		(*raiz)->esq=aux;	
	}
}
int contfolha(ArvBin *raiz)
{
	// RECURSIVA
/*	if(*raiz!=NULL)
	{
		int cont=contfolha(&((*raiz)->esq));
		if((*raiz)->esq == NULL && (*raiz)->dir == NULL)
		{
			return cont+1;
		}
		int cont2=contfolha(&((*raiz)->dir));
		if((*raiz)->esq == NULL && (*raiz)->dir == NULL)
		{
			return cont2+1;
		}
		
		return cont + cont2;
	}*/
	
	// ITERATIVA
	if(*raiz!=NULL)
	{
		no *aux=*raiz;
		int cont=0;
		while(1)
		{
			if(aux!=NULL)
			{
				if(aux->esq==NULL && aux->dir==NULL)
				{
					cont++;	
				}	
				if(aux->dir!=NULL)
				{
					empilha(aux->dir);
				}
				aux = aux->esq;		
			}
			else
			{
				if(vazia())
				{
					break;
				}
				aux = desempilha();	
			}
		}
		
		return cont;				
	}
	
}
int contnaofolha(ArvBin *raiz)
{
	//FORMA RECURSIVA
	/*if(*raiz!=NULL)
	{
		int cont=contnaofolha(&((*raiz)->esq));
		int cont2=contnaofolha(&((*raiz)->dir));
		    
	    if((*raiz)->dir !=NULL || (*raiz)->esq !=NULL)
		{
			return cont + cont2 + 1;	
		}
	}*/
	
	//FORMA ITERATIVA
	if(*raiz!=NULL)
	{	 
		no *aux=*raiz;
		int cont=0;
		while(1)
		{
			if(aux!=NULL)
			{
				if(aux->esq!=NULL || aux->dir!=NULL)
				{
					printf("\n----------------\n\nEndereco:%x  \n  Dado:%d\nEsq:%x  Dir:%x",aux,aux->dado,aux->esq,aux->dir);
					cont++;
				}
				if(aux->dir!=NULL)
				{
					empilha(aux->dir);
				}
				aux = aux->esq;
			}
			else
			{
				if(vazia()){
					break;
				}	
				aux = desempilha();		
			}	
		}
		
		return cont;
	}	
}
int main()
{
	ArvBin* raiz = criaArv();
	int op,valor=0;
	
	do
	{
		printf("\n1 - Inserir");
		printf("\n2 - Lista Pre-Ordem");
		printf("\n3 - Lista Em Ordem");
		printf("\n4 - Lista Pos-Ordem");
		printf("\n5 - Buscar");
		printf("\n6 - Remover");
		printf("\n7 - Menor valor");
		printf("\n8 - Maior valor");
		printf("\n9 - Quantidade de nos");
		printf("\n10 - Altura da arvore");
		printf("\n11 - Troca");
		printf("\n12 - Quantidade nos folha");
		printf("\n13 - Quantidade nos N/folha");
	/*	printf("\n7 - Libera Arvore");*/
		printf("\nEscolha:");
		scanf("%d",&op);
		switch(op)
		{

			case 1:
			/*	printf("\nDigite o dado:");
				scanf("%d",&valor);*/
				inserir(raiz,10);
				inserir(raiz,5);
				inserir(raiz,20);
				inserir(raiz,4);
				inserir(raiz,6);
				inserir(raiz,7);
				getch();
   				system("cls");
				break;
				
			case 2:
				preordem(raiz);
	
				getch();
   				system("cls");
				break;
			
			case 3:
				emordem(raiz);
				getch();
   				system("cls");
				break;	
				
	    	case 4:
				posordem(raiz);
				getch();
   				system("cls");
				break;
			
			case 5:
				printf("\nDigite o dado:");
				scanf("%d",&valor);
				buscar(raiz,valor);
				getch();
   				system("cls");
				break;	
				
			case 6:
				printf("\nDigite o dado para exclusao:");
				scanf("%d",&valor);
				remover(raiz,valor);
				getch();
   				system("cls");
				break;
				
				
			case 7:
				menor(raiz);
				getch();
   				system("cls");
				break;
			
			case 8:
				maior(raiz);
				getch();
   				system("cls");
				break;
			
			case 9:
				valor = totalnos(raiz);	
				printf("Total nos:%d",valor);
				getch();
				system("cls");
				break;	
			
			case 10:
				valor = altura(raiz);
				printf("Altura:%d",valor);
				getch();
				system("cls");	
				break;
			
			case 11:
				troca(raiz);
				getch();
				system("cls");
				break;	
					
			case 12:
			    valor = contfolha(raiz);
				printf("Total nos folha:%d",valor);
				getch();
				system("cls");
				break;
				
			case 13:
				valor = contnaofolha(raiz);
				printf("Total N/Folha:%d",valor);	
				getch();
				system("cls");
				break;	
					
		/*	case 7:
				liberaArv(raiz);
				getch();
   				system("cls");
				break;	*/		
					
			
		}
		
	}while(op!=0);
	
	getch();
	return 0;	
}
