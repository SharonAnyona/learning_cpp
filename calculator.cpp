#include<stdio.h>
int main()
{
	double num1;
	double num2;
	char op;
	
	printf("enter a number: ");
	scanf("%lf", &num1);
	printf("enter operator: ");
	scanf(" %c", &op);
	printf("enter a number: ");
	scanf("%lf", &num2);
	
	if(op== '+'){
		printf("%f" , num1+num2);
	}else if(op == '-'){
		printf("%f" , num1-num2);
	}
	else if(op == '/'){
		printf("%f" , num1/num2);
	}
	else if(op == '*'){
		printf("%f" , num1*num2);
	}else{
		printf("invalid operator");
	}
	
	return 0;
	
}
