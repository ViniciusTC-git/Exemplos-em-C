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
				for(j=0;j<4;j++)
				{
			
					if(m[i][0] < m[i][2])
					{
					
						aux=m[i][0];
						m[i][0]=m[i][2];
						m[i][2]=aux;
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
