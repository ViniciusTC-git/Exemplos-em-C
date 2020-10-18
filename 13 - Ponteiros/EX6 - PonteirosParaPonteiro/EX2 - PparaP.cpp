#include <iostream>
#include <conio.h>

int main()
{
	
	int x = 10;
	
	int *p = &x;
	
	int **p1 = &p;
	
	int ***p2 = &p1;
	
	printf("%d\n", p2);//Endereço de p1
	printf("%d\n", *p2);//Endereço de p
	printf("%d\n", **p2);//Endereço de x
	printf("%d\n", ***p2);//Valor de x
	
	getch();
	
	return 0;
	
}
