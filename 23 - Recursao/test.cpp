#include <iostream>
#include <conio.h>

int fatorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*fatorial(n-1);
	}
}

int main()
{
	int r = fatorial(5);

	printf("%d",r);
	
	
	getch();
	return 0;
}
