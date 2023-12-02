#include <stdio.h>

int main(){
	
	/*
	 --pyramid
	 *
	 * *
	 * * *
	 * * * *

	 for(int i =1 ; i<10; i++){
		for(int j=1 ; j<i;j++){
		printf("*");	
		}
		printf("\n");
	}

	--reverse pyramid
	* * * *
	* * *
	* *
	*
	
	for(int i=8;i>0;i--){
		for(int j =i;j>0;j--){
			printf("*");	
		}
		printf("\n");
	}

	--pyramid from middle 
		*
	      *	* *
	    * * * * *	
   	int i, space, rows=5 , k = 0;
   	for (i = 1; i <= 5;i++, k = 0) {
      		for (space = 1; space <= 5-i;space++) {
        	 printf("  ");
     	 }
      	while (k != 2 * i - 1) {
        	 printf("* ");
        	 k++;
      	}
      	printf("\n");
   	}
  
 	--pyramid middle reverse
	* * * * *
	  * * *
	    *
 */
	 for (int  i = 5; i >= 1; --i) {
     		 for (int space = 0; space < 5 - i; ++space)
         		printf("  ");
     		 for (int j = i; j <= 2 * i - 1; ++j)
        		 printf("* ");
      		for (int j = 0; j < i - 1; ++j)
         		printf("* ");
      		printf("\n");
   	} 
	 return 0;
}


