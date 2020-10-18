#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
 
 
int main()
{
 
 	int segundo = 0;
 	
 	int i,j;
 	
    while (segundo < 10)
    {
          	segundo++;
        	printf("%d ",segundo);
      
          
         Sleep(500);
          
          if (segundo == 10)
          {
               system("cls"); 

               segundo = 0;
           
          }
          
       
          
          
    
    }
 
 
    getchar();
    return 0;
}
