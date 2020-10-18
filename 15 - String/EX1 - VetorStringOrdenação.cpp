#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main()
{
	char v[5][10] = {"a", "d", "c", "b", "e"};
	
	char aux[20];
	
	int i,j;
	
	for(i = 0; i < 5; i++)
	{
		for(j=i+1;j<5;j++)
		{
	  	 if (strcmp(v[j - 1], v[j]) > 0)
	  	 
		    {
        	 strcpy(aux, v[j - 1]);
        	 strcpy(v[j - 1], v[j]);
        	 strcpy(v[j], aux);
				
			}
		}
	
	}
	
	
	
	for(i = 0; i < 5; i++)
	{
		printf("%s\n", v[i]);
	}
	
	
	getch();
	return 0;
}
