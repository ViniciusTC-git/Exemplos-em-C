#include <iostream>
#include <conio.h>

void matrizimpar();

void matrizpar();

int main()
{
	
	matrizimpar();
	printf("\n");
	matrizpar();
	getch();
	return 0;
	
		
	
}

void matrizimpar()
{
	int mi[5][10];
	
	int i,j,cont=0;
	
	
	for( i=0;i<5;i++)
	{
		printf("\n");	
		for( j=0;j<10;j++)
		{
			
			cont=cont+1;
			mi[i][j]=cont;
	
			if(mi[i][j]%2!=0)
			{
			
			printf("%d ", mi[i][j]);
			}	
		}
		printf("\n");
	
	}
}

void matrizpar()
{
	int mp[5][10]; 
	
	int i,j,cont=0;
	
	
	for( i=0;i<5;i++)
	{
		printf("\n");	
		for( j=0;j<10;j++)
		{
			
			cont=cont+1;
			mp[i][j]=cont;
	
			if(mp[i][j]%2==0)
			{
			
			printf("%d ", mp[i][j]);
			}	
		}
		printf("\n");
	
	}
}
