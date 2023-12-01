#include <stdio.h>

int main(){
	//pyramid
	/*for(int i =1 ; i<10; i++){
		for(int j=1 ; j<i;j++){
		printf("*");	
		}
		printf("\n");
	}*/

	// reverse pyramid
	for(int i=8;i>0;i--){
		for(int j =i;j>0;j--){
			printf("*");	
		}
		printf("\n");
	}
	
}
