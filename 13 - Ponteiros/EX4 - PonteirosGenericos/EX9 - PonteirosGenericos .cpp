#include <iostream>
#include <conio.h>
int main()
{
	void *p = 0x5DC; //1500 ocupa 1 byte da memoria
	
	printf("%d", p);
	
	p++;
	
	printf("%d", p);//1501
	
	p = p + 15;
		
	printf("\n%d", p);//1516
	
	p = p - 2;
	
	printf("\n%d", p);//1514
	
	getch();
	return 0;
	
	
}
