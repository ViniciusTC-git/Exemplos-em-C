#include <iostream>
#include <conio.h>

int main()
{
	
	int x = 10;
	
	int *p = &x;
	
	int **p1 = &p;
	
	printf("%d\n", p1);//Endereço de p
	printf("%d\n", *p1);//Endereço de x
	printf("%d\n", **p1);//Valor de x
	
	getch();
	
	return 0;
	
}
