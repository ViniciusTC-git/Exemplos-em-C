#include <iostream>
#include <conio.h>

void matriz();

int i,j;

int m[2][2];



int main()
{
	
	
	 matriz();
	

	getch();	
	return 0;
}

void matriz()
{
		for(i=0;i<2;i++)
		{
			
				for(j=0;j<2;j++)
				{
					printf("\n");
					printf("Linha %d Coluna %d Digite: ",i+1,j+1);
					scanf("%d", &m[i][j]);
				
				
				}
			
		}
		
		printf("\n");
		
		for(i=0;i<2;i++)
		{
			printf("\n");
				for(j=0;j<2;j++)
				{
					printf("%d ",m[i][j]);
					
				
				
				}
			printf("\n");		
		}
		
	

	
}
