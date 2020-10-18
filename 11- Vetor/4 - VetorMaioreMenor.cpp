#include <iostream>
#include <conio.h>

int main()
{
	int v[10];
	
	int i,menor,maior=0,cont=0;
	
	for (i=0;i<9;i++)
	{
		v[i]=cont=cont+1;
		
		if(v[i] < menor)
		{
			menor=v[i];
		}
				
		if(v[i] > maior)
		{
			maior=v[i];
		}
		
	}
	
	printf("\nO menor numero e: %d ", menor);
	
	printf("\nO maior numero e: %d ", maior);
	
	getch();
	return 0;


}
