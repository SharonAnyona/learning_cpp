#include<stdio.h>
int max(int num1,int num2){
int result;
	if(num1 > num2){
    result =num1;
	
	}else{
	result = num2;
	}
	return result;
}
int main()
{
	printf("%d", max(4, 10));
	return 0;
}
