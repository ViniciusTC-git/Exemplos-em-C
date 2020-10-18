#include  <iostream>

int main()
{
	typedef struct
	{
		int a;
		int b;
		
	}lista;
	
	typedef struct
	{
		
		int codigo;
		
		lista lista1;
		
	}testa;
	
	testa cad[4];
	
	cad[0].codigo=0;
	
	printf("%d",cad[0].codigo);
	
	cad[1].codigo=1;
	
	printf("\n%d",cad[1].codigo);
	
	cad[0].lista1.a=20;
	
	printf("\n%d",cad[0].lista1.a);
	
	cad[0].lista1.b=30;
	
	printf("\n%d",cad[0].lista1.b);	
	
	
	
}
