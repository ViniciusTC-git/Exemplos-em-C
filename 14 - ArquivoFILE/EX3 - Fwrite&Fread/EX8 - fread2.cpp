#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>

int main()
{

	
	FILE *f;
	
	f = fopen("EX7 - fwrite2.txt","rb");//
	
	if (f == NULL)
	{
		printf("Erro na abertura\n");
		system("pause");
		exit(1);
	}
	
	char texto[20] = "Hello World";
	float x = 5;
	int v[5]= {1,2,3,4,5};
	
	fread(texto,sizeof(char),20,f);
	fread(&x,sizeof(float),1,f);
	fread(v,sizeof(int),5,f);
	

	
	printf("%s\n",texto);
	printf("%f\n",x);
	printf("%d,%d,%d,%d,%d",v[0],v[1],v[2],v[3],v[4]);

	printf("\n");
		
	
 	fclose(f);
	system("pause");
	return 0;
	
	

}
