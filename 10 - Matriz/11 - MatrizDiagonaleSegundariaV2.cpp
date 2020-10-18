#include <iostream>
#include <conio.h>

//Matriz
void matriz();

//Matriz Principal e segundaria
void matriz2();

//Matriz Principal e segundaria inversa
void matriz3();

//Fail
void matriz4();

//Troca diagonais
void matriz5();

//Diagonais Inverte
void matriz6();

//Troca Diagonais e Inverte
void matriz7();

//Troca Diagonal principal por linha
void matriz8();

//Troca Diagonal Segundaria por linha
void matriz9();

//Troca Diagonal principal por coluna
void matriz10();

//Troca Diagonal Secundaria por coluna
void matriz11();

int main(){
	
	printf("\n ");
	
	matriz();
	
	printf("\n ");
	
	matriz2();
	
	printf("\n ");	
		
	matriz3();
		
	printf("\n ");	
		
/*	matriz4();*/
	
	printf("\n ");
	
	matriz5();
	
	printf("\n ");	
	
	matriz6();
	
	printf("\n ");	
	
	matriz7();
	
	printf("\n ");
	
	matriz8();
	
	printf("\n ");
	
	matriz9();
	
	printf("\n ");
	
	matriz10();
	
	printf("\n ");
	
	matriz11();
	
	printf("\n ");
		
	getch();		
	return 0;	
	
}
void matriz()
{
	int m[4][4];
	
	int i,j,count=0;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			count=count+1;
			m[i][j]=count;
		
		}	
		
	}
	printf(" 1 - Matriz\n");
	for(i=0;i<4;i++)
	{
		printf("\n ");
		for(j=0;j<4;j++)
		{
			printf("%d ",m[i][j]);
		
		}	
		printf("\n ");
	}
		
}

void matriz2()
{
	int m[4][4];
	
	int i,j,count=0;
	
	
	printf(" 2 - Matriz Principal e segundaria\n");
	printf("\n ");
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			count=count+1;
			m[i][j]=count;
		
		}	
		
	}
	
	for(i=0;i<4;i++)
	{
	
		
		printf("%d ",m[i][i]);	
		
	}
		printf("\n ");
		
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if((i+j)==3)
			{
		
				printf("%d ",m[i][j]);
			}
		
		}
		
	}

}


void matriz3()
{
	int m[4][4];
	
	int i,j,count=0;
	
	
	printf("3 - Matriz Principal e segundaria inversa\n");
	printf("\n ");
	
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			count=count+1;
			m[i][j]=count;
		
		}	
		
	}
	
	
	
	for(i=3;i>=0;i--)
	{
			
		
			printf("%d ",m[i][i]);	
		

	
	}	
	
		
			printf("\n ");
			
			
	for(i=4;i>=0;i--)
	{
		for(j=4;j>=0;j--)
		{
			if((i+j)==3)
			{
		
				printf("%d ",m[i][j]);
			}
		
		}
		
	}	

}
/*void matriz4()
{

	
}*/

void matriz5()
{
	
	int m[4][4];
	
	int i,j,count=0,aux;
	
	printf("\n");
	printf(" 5 - Troca diagonais\n");
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			count=count+1;
			m[i][j]=count;
		
		}	
		
	}
	

	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
		
			if((i+j)==3)
			{
		
				aux=m[i][i];
				m[i][i]=m[i][j];
				m[i][j]=aux;	
		
			}
		}
	}


	for(i=0;i<4;i++)
	{
		printf("\n");
		for(j=0;j<4;j++)
		{
			
			printf("%d ", m[i][j]);
		
		}	
		printf("\n");
	}
	
	
	
}
void matriz6()
{
	int m[4][4];
	int i,j,count=0,aux[4];
	
	printf("\n");
	printf(" 6 - Diagonais Inverte\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			count=count+1;
			m[i][j]=count;
		
		}	
		
	}
	
	for(i=0;i<4;i++)
	{
		aux[i]=m[i][i];
		
	
	}
	
	for(i=0;i<4;i++)
	{
		m[i][i]=aux[3-i];
		
	}
	
	for(j=0; j<4; j++)
	{
		
   	 aux[j] = m[j][3-j];
   	 
	}



	for(j=0;j<4;j++)
	{
    	m[j][3-j] = aux[3-j];
	}	
	
	
	
	for(i=0;i<4;i++)
	{
		printf("\n");
		for(j=0;j<4; j++)
		{
		
			printf(" %d ", m[i][j]);
		
		}
		printf("\n");
	}
	
	
	
	
}
void matriz7()
{
	printf("\n");
	printf("7 - Troca Diagonais e Inverte\n");
	
	int m[4][4];
	int i,j,count=0,aux[4],aux2[4],aux3[4];

	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			count=count+1;
			m[i][j]=count;
		
		}	
		
	}
	
	//inverte diagonal principal
	for(i=0;i<4;i++)
	{
		aux[i]=m[i][i];
		
	
	}
	
		for(i=0;i<4;i++)
		{
			m[i][i]=aux[3-i];
		
		}
		
	//inverte diagonal secundaria
	for(j=0; j<4; j++)
	{
		
   	 aux2[j] = m[j][3-j];
   	 
	}

		for(j=0;j<4;j++)
		{
   		 	m[j][3-j] = aux2[3-j];
		}	
	
	
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				
				if((i+j)==3)
				{
		
					aux3[i]=m[i][i];
					m[i][i]=m[i][j];
					m[i][j]=aux3[i];	
			
				}
			}
		}
	
	
	
	
	

	for(i=0;i<4;i++)
	{
		printf("\n");
		for(j=0;j<4; j++)
		{
		
			printf(" %d ", m[i][j]);
		
		}
		printf("\n");
	}
	
	
	
}

void matriz8()
{
	printf("\n");
	printf(" 8 - Troca Diagonal principal por linha\n");
	
	int m[4][4],aux[4];
	
	int i,j,count=0;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
		
			m[i][j]=count=count+1;
			
		
			
	
		}
	}

	for(i=0;i<4;i++)
	{
		
			aux[i]=m[i][i];
			m[i][i]=m[3][i];
			m[3][i]=aux[i];	
			
			
	}
	
	
	for(i=0;i<4;i++)
	{
		printf("\n");
		for(j=0;j<4; j++)
		{
		
			printf(" %d ", m[i][j]);
		
		}
		printf("\n");
	}
		
	
}



void matriz9()
{
	printf("\n");
	printf(" 9 - Troca Diagonal Segundaria por linha\n");
	
	int m[4][4],aux[4],aux2[4];
	
	int i,j,count=0;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
		
			m[i][j]=count=count+1;
			
			aux[j]=m[3][j];
		
			
	
		}
	}	

	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if((i+j)==3)
			{
			
				aux2[i]=m[i][j];
				
			}
			
	
		}
	}
	
	
		
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if((i+j)==3)
			{
			
				m[i][j]=aux[i];
				
			}
			
	
		}
	}
	
	
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
		
			m[3][i]=aux2[i];
			
	
		}
	
	}

	for(i=0;i<4;i++)
	{
		printf("\n");
		for(j=0;j<4; j++)
		{
		
			printf(" %d ", m[i][j]);
		
		}
		printf("\n");
	}
		
	
}
void matriz10()
{
	printf("\n");
	printf(" 10 - Troca Diagonal principal por coluna\n");
	
	int m[4][4],aux[4],aux2[4];
	
	int i,j,count=0;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
		
			m[i][j]=count=count+1;
			

			
	
		}
	}
	
	for(i=0;i<4;i++)
	{
		aux[i]=m[i][i];
		m[i][i]=m[i][0];
		m[i][0]=aux[i];
		
		
	}
	
		
	
	for(i=0;i<4;i++)
	{
		printf("\n");
		for(j=0;j<4; j++)
		{
		
			printf(" %d ", m[i][j]);
		
		}
		printf("\n");
	}
	
	
	
}	
void matriz11()
{
	
	printf("\n");
	printf(" 11 - Troca Diagonal Secundaria por coluna\n");
	
	int m[4][4],aux[4],aux2[4];
	
	int i,j,count=0;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
		
			m[i][j]=count=count+1;
			
		/*	aux[i]=m[i][0];//auxiliar 2 pega os valores da coluna 0 da matriz*/
			
	
		}
	}
/*	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if((i+j)==3)
			{
				aux2[i]=m[i][j];
			}
		}
	
		
	}
*/
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if((i+j)==3)
			{
				aux[i]=m[i][j];
				m[i][j]=m[i][3];
				m[i][3]=aux[i];
				
				
				
				
			}
		}
	
		
	}

/*	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			//auxiliar envia os valores da diagonal principal para a coluna 0 da matriz 
			m[i][0]=aux2[i];
			
	
		}
	}
	
	*/
	
	
	for(i=0;i<4;i++)
	{
		printf("\n");
		for(j=0;j<4; j++)
		{
		
			printf(" %d ", m[i][j]);
		
		}
		printf("\n");
	}
	
	
	
}	
	
	
	










