#include <stdio.h>
#include <stdlib.h>


int soma(int a, int b){return a+b;}



int main()
{
	int x=10,y=10,r;
	
	int(*p)(int,int);
	
	p = soma;
	r = p(x,y);
	
	printf("%d",r);
	
	return 0;
	
	
}
