#include <iostream>
#include <conio.h>

int main()
{
	int v[10];
	
	int i,j,aux;
	
	for (i=0;i<9;i++)
	{
		scanf("\n%d", &v[i]);
		
	
	}
	
	for (i=0;i<9;i++)
	{
		for(j=i+1;j<9;j++)
		{
			if(v[i] < v[j])
			{
				aux=v[i];
				v[i]=v[j];
				v[j]=aux;
				
				
			}
			
		
		}	
		
		printf("\n%d", v[i]);	
	}
	

	getch();
	return 0;


}
