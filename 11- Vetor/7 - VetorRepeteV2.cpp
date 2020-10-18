#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int v[5]= {1,1,3,4,5}, i, j,cont=0,aux;


    
    cont = 1; //Se está na lista então aparece pelo menos 1 vez
    
    for(i=0; i<5; i++)
	{ //Note que começa com i=1 para já comparar o segundo com o primeiro no if abaixo:
	        if(v[i] == v[i-1])
			{ //Se é igual ao anterior incrementa o contador
	            cont++; 
	        }
	        else 
			{
				printf("O numero %d aparece %d vezes!\n", v[i], cont);
	            cont = 1;
	        }
	    
	    
    }
    
    return 0;
}
