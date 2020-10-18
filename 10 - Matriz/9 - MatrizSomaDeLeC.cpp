#include <iostream>
#include <conio.h>


int main()
{
	int m[2][2] = {1,2,3,4};
	int i,j;
	
	int linha = 4,coluna = 2;
	int linha2 = 5,coluna2 = 5;
	
	for(i=0;i<2;i++)
	{
		
		for(j=0;j<2;j++)
		{
			if(i == 0){linha += m[i][j];}
			
			if(i == 1){linha2 += m[i][j];}
				
	
			if(j == 0){coluna += m[i][j];}
				
			if(j == 1){coluna2 += m[i][j];}
			
		}
	}
	
	for(i=0;i<2;i++)
	{
		printf("\n");
		for(j=0;j<2;j++)
		{
			
			printf("%d ", m[i][j]);
			
		}
		printf("\n");
	}
	

	
	printf("\nResultado soma L[0][j] = %d", linha);
	printf("\nResultado soma L[1][j] = %d", linha2);
	
	printf("\nResultado soma L[i][0] = %d", coluna);
	printf("\nResultado soma L[i][1] = %d", coluna2);
	
	
		
	getch();
	return 0;
	
}
