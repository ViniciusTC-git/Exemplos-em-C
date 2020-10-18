#include <iostream> 
#include <conio.h> 

int main()
{
	int v[5] = {1,2,3,4,5};
	
	int i;
	
	int *p;
	
	p = v;
	
	for (i=0;i<5;i++)
	{
		printf("%d\n", &p[i]);
	}
	
	getch();
	return 0;
	
}
