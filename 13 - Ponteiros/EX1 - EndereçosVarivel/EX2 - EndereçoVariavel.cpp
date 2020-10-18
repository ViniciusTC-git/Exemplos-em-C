#include <iostream>

int main()
{
	//EXEMPLO PONTEIROS 2
	
	int a=10;
	
	int *p = &a;
	
	printf("%d", a);//VALE 10
	
	*p = 12;// PONTEIRO TROCA VALOR PARA 12
	
	printf("\n%d", *p);//PONTEIRO VALE 12
	
	printf("\n%d", a);//AGORA VALE 12, ANTES VALIA 10
	
	
	return 0;
	
	
	
}
