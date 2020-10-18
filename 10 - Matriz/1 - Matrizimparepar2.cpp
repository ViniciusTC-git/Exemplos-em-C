#include <iostream>
#include <conio.h>

int main()
{
	int m[3][6];
	
	int i,j,cont=0,aux;
	
	
	for(i=0;i<3;i++)
	{
			
		for(j=0;j<6;j++)
		{
			
			m[0][j]=j+1;
			
			m[i][j]=0;
		
	
		}
	
	}
	
	for(i=0;i<j;i++)
	{			
			if(m[0][i] %2==0)
			{
				m[2][i]=m[0][i];
			}
			else
			{
				m[1][i]=m[0][i];
			}
	}
	
	for(i=0;i<3;i++)
	{
		printf("\n");	
		for(j=0;j<6;j++)
		{
			
			printf("%d ", m[i][j]);
		
		}
		printf("\n");
	}
	
	getch();
	return 0;
}
