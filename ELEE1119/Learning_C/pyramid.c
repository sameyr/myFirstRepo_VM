#include <stdio.h>

int main(){
	//pyramid
	/*for(int i =1 ; i<10; i++){
		for(int j=1 ; j<i;j++){
		printf("*");	
		}
		printf("\n");
	}

	// reverse pyramid
	for(int i=8;i>0;i--){
		for(int j =i;j>0;j--){
			printf("*");	
		}
		printf("\n");
	}*/
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
   return 0;
}
