#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main()
{
	char v[5][10] = {"a", "b", "c", "d", "e"};
	
	char aux[20];
	
	int i,j,cont=0;
	
	for(i=0;i<5;i++)
	{
		printf("\nVetor[%d] = %s",i+1,v[i]);
	}
	
		printf("\n\n");
	
	
	 for(i=0;i<5;i++)
	{
        for(j=i+1;j<5;j++)
		{
            if(strcmp(v[i],v[j]) > 0)
			{
                strcpy(aux,v[i]);
                strcpy(v[i],v[j]);
                strcpy(v[j],aux);
            }
        }
    }

	cont = 1;
	
    
    for(i=1; i<5; i++)
	{ //Note que começa com i=1 para já comparar o segundo com o primeiro no if abaixo:
        if(strcmp(v[i],v[i-1])==0)
		{ //Se é igual ao anterior incrementa o contador
            cont++;
        }
        else { //Se mudou o número
        
            //Acabou de contar o número anterior então podemos imprimir
            //o número de vezes que ele aparece:
            printf("a letra %s aparece %d vezes!\n", v[i-1], cont);
            
            //Recomeça a contagem para o novo número:
            cont = 1;
        }
    }
    //Também imprime para o último número:
    printf("a letra %s aparece %d vezes!\n", v[i-1], cont);

	

	
	
	getch();
	return 0;
}
