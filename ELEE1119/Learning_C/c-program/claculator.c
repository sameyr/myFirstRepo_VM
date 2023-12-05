#include <stdio.h>

int main(){

	char operator;
	double num1;
	double num2;
	double result;

	printf("\n Enter an Operator: ");
	scanf("%d",&operator);

	printf("%d", operator);

	printf("\n Enter first Number: ");
	scanf("%lf", num1);

	printf("\n Enter second Number: ");
	scanf("%lf", num2);
	
	switch(operator){
		case '+':
			result= num1 + num2;
			printf("result : %d",result);
			break;
		case '-':
			result= num1 - num2;
			printf("result : %d",result);
			break;
		case '*':
			result= num1 * num2;
			printf("result : %d",result);
			break;
		case '/':
			result = num1/num2;
			printf("result : %d",result);
			break;
		default:
			printf("Operatore is invalid");
			break;
			
	}
	return 0;
}
