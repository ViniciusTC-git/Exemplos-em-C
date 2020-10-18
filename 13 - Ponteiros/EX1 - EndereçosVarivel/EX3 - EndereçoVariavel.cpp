#include <iostream>
#include <conio.h>
int main()
{
	int *p, *p1, a=10;
	
	p = &a;
	
	printf("%d",*p);
	
	p1 = p;
	
	printf("\n%d", *p1);
	
	getch();
	return 0;
	
	
}
