#include <iostream>
#include <conio.h>


int main()
{
	int m[2][2] = {1,2,3,4};
	int i,j;
	int s=0,s2=0;
	
	for(i=0;i<2;i++)
	{
		printf("\n");
		for(j=0;j<2;j++)
		{
			
		
		
			printf("%d ", m[i][j]);
		
		
			
		}
		printf("\n");
	}	

	
	
	for(i=0;i<2;i++)
	{
		printf("\nValor diagonal principal %d", m[i][i]);
		
		s+=m[i][i];

	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			if((i+j)==1)
			{
			
				printf("\nValor diagonal segundaria %d", m[i][j]);
				s2 += m[i][j];//Se for multiplicado trocar o 0 pelo 1 na variavel s2
			}
			
		}

	}	

		printf("\n\n");
		printf("\nResultado soma diagonal principal = %d \nResultado soma diagonal segundaria = %d", s,s2);
		
	getch();
	return 0;
	
}
