#include <iostream>
#include <conio.h>

int main()
{
	int m[3][4];
	
	int i,j,cont=0,aux;
	
	
	for(i=0;i<3;i++)
	{
			
		for(j=0;j<4;j++)
		{
			cont=cont+1;
			m[i][j]=cont;

		}
	
	}
	for(i=0;i<3;i++)
	{
			
		for(j=i+1;j<4;j++)
		{
			if(m[0][i] < m[0][j])
			
			{
				aux = m[0][i];
				m[0][i]=m[0][j];
				m[0][j]=aux;
				
			}


			
			
	
		}
	
	}
	
	
	
	for(i=0;i<3;i++)
	{
		printf("\n");	
		for(j=0;j<4;j++)
		{
			
			printf("%d ", m[i][j]);
		
		}
		printf("\n");
	}
	
	getch();
	return 0;
}
