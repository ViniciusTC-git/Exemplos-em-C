#include <iostream>
#include <conio.h>
int main()
{
	int *p = 0x5DC; //1500
	char *c =  0x5DC; //1500
	
	printf("%d", p);//1500
	printf("%c", c);//1500
	
	p++;
	c++;
	
	printf("%d", p);//1504 o tipo int ocupa 4 bytes
	printf("%c", c);//1501 o tipo char ocupa 1 bytes

	getch();
	return 0;
	
	
}
