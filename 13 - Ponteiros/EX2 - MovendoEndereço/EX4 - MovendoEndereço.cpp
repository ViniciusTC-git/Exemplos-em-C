#include <iostream>
#include <conio.h>
int main()
{
	int *p = 0x5DC; //1500
	
	printf("%d", p);
	
	p++;
	
	printf("%d", p);//1504
	
	p = p + 15;
		
	printf("\n%d", p);//1564 ou seja int  ocupa 4 bytes, 4 x 15 = 60, 1504 + 60 = 1564
	
	p = p - 2;
	
	printf("\n%d", p);//1556 4 x 2 = 8, 1564 - 8 = 1556
	
	getch();
	return 0;
	
	
}
