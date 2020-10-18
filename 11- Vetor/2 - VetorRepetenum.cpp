#include <iostream>
#include <conio.h>

#define valor 10

int main()
{
	int v[valor];

	int i,cont=0;
	
	for(i=0;i<valor;i++)
	 {
	
	 	v[i]=cont=cont+1;
	 	
	 	if(v[i]>5)
	 	{
	 		v[i]=4;
		 }

	 	
	 	

	 	
	 }
	 
	 
	for(i=0;i<valor;i++)
	 {
	 	
	 	
	 	printf("\n%d", v[i]);
	 }
	 
	 getch();
	 return 0;
}
