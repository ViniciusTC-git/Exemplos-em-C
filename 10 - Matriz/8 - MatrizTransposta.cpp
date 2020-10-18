#include <iostream>
#include <conio.h>

void matrizt();

void matrizc();

int m[4][2];

int aux;

int i,j,cont=0,cont2=0;

int main()
{
	printf("Matriz Normal");
	printf("\n");
	matrizc();
	
	printf("\n");
	
	printf("Matriz Transposta");
	printf("\n");
	matrizt();
	
	getch();
	return 0;
	
	
}
void matrizc()
{
		for(i=0;i<4;i++)
		{
			
			for(j=0;j<2;j++)
			{
					cont=cont+1;
					
					m[i][j]=cont;
					
				
	
			}			
		}
		
	
		for (i=0;i<4;i++)
		{
			for (j=0;j<2;j++)
			{
			
				
				printf("%d ",m[i][j]);
			
		
			}
		
			printf("\n");
		}



	
}











void matrizt()
{

	
		for(i=0;i<4;i++)
		{
			
			for(j=0;j<2;j++)
			{
					cont2=cont2+1;
					
					m[i][j]=cont2;
					
				
	
			}			
		}
		
	
		for (i=0;i<2;i++)
		{
			for (j=0;j<4;j++)
			{
			
				
				printf("%d ",m[j][i]);
			
		
			}
		
			printf("\n");
		}
	
	
}

