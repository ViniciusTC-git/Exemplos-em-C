#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>


int main()
{
	int v[5]={1,2,3,4,5};
	int i,j,c=0;
	
	

	
	for( i=0;i<5;i++)
	{
		
		
		printf("\nVetor[%d]=%d",i,v[i]);
	}
	for( i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(v[i]==v[j])
			{
			
				printf("\nO valor %d se repete %d",v[i],i+1);
			
			}
			else
			{
				c=c+1;
			}
		
		}
	}
	
	if(c==10)
	{
		printf("\nValores nao repetem");
	}
	
	getch();
	return 0;


}
