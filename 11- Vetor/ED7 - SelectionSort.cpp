#include <iostream>

//ORDENA��O DE VETORES METODO Selection Sort/Ordena��o por sele��o

//Esse metodo procuraa o menor e vetor e o coloca na primeira posi��o
//Descarta a primeira posi��o do vetor e repete na segunda posi��o
//Isso e feito para todas as posi��es do vetor

int main(){
	
	
    int vet[5]={8,9,5,3,5};
    
	int i, j, min, aux,n=5;
    
    printf("\nSem ordena");
   	for(i=0; i<n;i++)
	{
	
		printf("\n%d", vet[i]);
	}
    
    
    for (i=0; i<n-1; i++)
	{
        min = i;
        
   		for (j=i+1; j<n; j++)
		{
            if(vet[j] < vet[min])
            min = j;
    	}
    	if(i != min)
    	{
   			aux = vet[i];
    		vet[i] = vet[min];
   			vet[min] = aux;
   		}
    }
    
	printf("\nOrdenado");
	for(i=0; i<n;i++)
	{
		
		printf("\n%d", vet[i]);
	}
	
	
	system("pause");
	return 0;
	
}
