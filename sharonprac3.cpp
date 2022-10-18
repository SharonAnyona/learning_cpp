#include <stdio.h>
int main()
{ 
 
  SayHi("mike", 23);
  sayHi("john", 45);

  return 0;
}
void SayHi(char name[], int age){
	printf("hello %s, name your age is %d");
}
