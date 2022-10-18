#include<stdio.h>
int main()
{
	char grade = 'A';
	switch(grade){
		case 'A' :
			printf("you did great!");
			break;
		case 'B' :
			printf("you did alright!");
			break;
		case 'C' :
			printf("you did poorly!");
			break;	
		case 'F' :
			printf("you failed!");
			break;
		default :
		     printf("invalid grade");	
	}
	
	
	return 0;
}
