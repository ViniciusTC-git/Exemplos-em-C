#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
typedef struct no{
 int info;
 struct no * esq, *dir;
}NoArv;
 
typedef struct Pilha
{
	struct no *info;
	Pilha *prox;
	
}pilha;
pilha *topo=NULL;
 
NoArv* arv_criavazia()
{
  return NULL;
}
 
int arv_vazia (NoArv* a)
{
 return a==NULL;
}

NoArv* arv_libera(NoArv* a)
{
 if (!arv_vazia(a)){
    arv_libera(a->esq); /* libera sae */
    arv_libera(a->dir); /* libera sad */
    free(a); /* libera raiz */
 }
 return NULL;
}

 
NoArv* arv_buscar (NoArv* r, int v)
{
 if (r == NULL)
    return NULL;
 else if (r->info > v)
    return arv_buscar (r->esq, v);
 else if (r->info < v)
    return arv_buscar (r->dir, v);
 else return r;
}
 

void empilha(no *aux)
 {
 	pilha *novo = (pilha*)malloc(sizeof(pilha));
 	
 	novo->info = aux;
 	novo->prox=topo;
 	topo = novo;
 	
 	
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
void arv_preordem (NoArv* a)
{
	no *aux = a;
    empilha(aux);
	while(!vazia())
	{
		aux = desempilha();
		if(aux!=NULL)
		{
			printf("\n----------------\n\nEndereco:%x  \n  Dado:%d\nEsq:%x  Dir:%x",aux,aux->info,aux->esq,aux->dir);
			if(aux->dir!=NULL)
			{
				empilha(aux->dir);
			}
			if(aux->esq!=NULL)
			{
				empilha(aux->esq);	
			}
		}
		
	}
	
/*	do
	{
		while(aux!=NULL)
		{
			
	  		empilha(aux);
	     	printf("\n----------------\n\nEndereco:%x  \n  Dado:%d\nEsq:%x  Dir:%x",aux,aux->info,aux->esq,aux->dir);
		 	aux = aux->esq;
		 	
		}
		if(topo!=NULL)
		{
			pilha *aux2=topo;
			topo = aux2->prox;
			aux = aux2->info->dir;
			free(aux2);
		}
		
	
	}while(topo!=NULL||aux!=NULL);*/
	
/*	while(!vazia())
	{
		aux = desempilha();
		if(aux!=NULL)
		{
			printf("\n-------\n\nDado:%d",aux->info);
			empilha(aux->dir);
			empilha(aux->esq);
		}
	}
	*/
	
	
	/*if (!arv_vazia(a))
	 {
	    printf("\n----------------\n\nEndereco:%x  Dado:%d\nEsq:%x  Dir:%x",a,a->info,a->esq,a->dir); 
	    arv_preordem(a->esq); 
	    arv_preordem(a->dir); 
	 }*/
}
 
 
void arv_emordem (NoArv* a)
{
 if (a != NULL) {
    arv_emordem(a->esq);
    printf("\n----------------\n\nEndereco:%x  Dado:%d\nEsq:%x  Dir:%x",a,a->info,a->esq,a->dir);
    arv_emordem(a->dir);
 }
}
 
void arv_posordem (NoArv* a)
{
 if (!arv_vazia(a)){
    arv_posordem(a->esq); /* mostra sae */
    arv_posordem(a->dir); /* mostra sad */
     printf("\n----------------\n\nEndereco:%x  Dado:%d\nEsq:%x  Dir:%x",a,a->info,a->esq,a->dir);
 }
}
 
NoArv* arv_inserir (NoArv* a, int v)
{
 // se for folha faz a insercao
 if (a==NULL) {
    a = (NoArv*)malloc(sizeof(NoArv));
    a->info = v;
    a->esq = a->dir = NULL;
 }
 else if (v < a->info) // se for menor sub arvore da esquerda
    a->esq = arv_inserir(a->esq,v);
 else if (v > a->info) // se for maior sub arvore da direita
    a->dir = arv_inserir(a->dir,v);
 return a;
}
 
NoArv* arv_retirar (NoArv* r, int v)
{
 if (r == NULL)
    return NULL;
 else if (r->info > v)
    r->esq = arv_retirar(r->esq, v);
 else if (r->info < v)
    r->dir = arv_retirar(r->dir, v);
 else { /* achou o nó a remover */
 /* nó sem filhos */
    if (r->esq == NULL && r->dir == NULL) {
       free (r);
       r = NULL;
    }
    /* nó só tem filho à direita */
    else if (r->esq == NULL) {
       NoArv* t = r;
       r = r->dir;
       free (t);
    }
    /* só tem filho à esquerda */
    else if (r->dir == NULL) {
       NoArv* t = r;
       r = r->esq;
       free (t);
    }
    /* nó tem os dois filhos */
    else {
       NoArv* f = r->esq;
       while (f->dir != NULL) {
          f = f->dir;
       }
       r->info = f->info; /* troca as informações */
       f->info = v;
       r->esq = arv_retirar(r->esq,v);
    }
 }
return r;
}
 
int main() {
 NoArv* a;
 a=arv_criavazia();
 a=arv_inserir(a, 10);
 a=arv_inserir(a, 20);
 a=arv_inserir(a, 5);
 a=arv_inserir(a, 6);
 a=arv_inserir(a, 2);
/* printf("\nEm Ordem... ");
 arv_emordem(a);
  printf("\nPos Ordem... ");
 arv_posordem(a);*/
 printf("Pre Ordem... ");
 arv_preordem(a);

 return 0;
}
