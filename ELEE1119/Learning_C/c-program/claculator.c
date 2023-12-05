#include <stdio.h>

int main(){

	char operator;
	double num1;
	double num2;
	double result;

	printf("\n Enter an Operator( + - * /): ");
	scanf("%d",&operator);
	
	printf("\n Enter your First Number: ");
	scanf("%lf", &num1);

	printf("\n Enter your Second Number: ");
	scanf("%lf", &num2);

	/*if (operator == '+'){ 
		result = num1 + num2;
		printf("%d",result);
	}
	else{
		printf("Invalid Operator");
	}*/
	
	switch(operator){
		case '+':
			result= num1 + num2;
			printf("result : %lf",result);
			break;
		case '-':
			result= num1 - num2;
			printf("result : %lf",result);
			break;
		case '*':
			result= num1 * num2;
			printf("result : %lf",result);
			break;
		case '/':
			result = num1/num2;
			printf("result : %lf",result);
			break;
		default:
			printf("Operatore is invalid \n");
			break;
			
	}

}
