#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>

int main()
{

	
	FILE *f;
	
	f = fopen("EX7 - fwrite2.txt","wb");//
	
	if (f == NULL)
	{
		printf("Erro na abertura\n");
		system("pause");
		exit(1);
	}
	
	char texto[20] = "Hello World";
	float x = 5;
	int v[5]= {1,2,3,4,5};
	
	fwrite(texto,sizeof(char),20,f);
	fwrite(&x,sizeof(float),1,f);
	fwrite(v,sizeof(int),5,f);
	
	printf("\n");	
	
	
	
 	fclose(f);
	system("pause");
	return 0;
	
	

}
