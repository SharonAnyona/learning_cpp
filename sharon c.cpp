 #include<stdio.h>
int main()
{
	char color[20];
	char pluralnoun[20];
	char celebrityf[20];
	char celebrityl[20];
	printf("enter a color: ");
	scanf("%s", &color);
	printf("enter a pluralnoun: ");
	scanf("%s", &pluralnoun);
	printf("enter a celebrity: ");
	scanf("%s", &celebrityf, celebrityl);
	printf("roses are %s\n", color);
	printf("%s are blue \n", pluralnoun);
	printf("i love %s \n", celebrityf, celebrityl);



	return 0;
}
