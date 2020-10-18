#include <iostream>
#include <conio.h>


int a[5];

int main()
{
		
		printf("\nNumero 1:");
		scanf("%d", &a[0]);
		printf("\nNumero 2:");
		scanf("%d", &a[1]);
		printf("\nNumero 3:");
		scanf("%d", &a[2]);
		printf("\nNumero 4:");
		scanf("%d", &a[3]);
		
		a[4] = (a[0]+a[1]+a[2]+a[3])/4;
		
		printf("O resultado e: %d",a[4]);
		
		getch();
		return 0;
		
	
	
}
