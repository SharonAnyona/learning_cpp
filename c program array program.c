#include<stdio.h>
#include<conio.h>
int main(){
	int array [5],n,i,item;
	printf("enter the size of array: ");
	scanf("%d", &n);
	printf("\n Enter Elements in the array: ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &array[i]);
		printf ("\n enter the elements at the beginning");
		scanf("%d", &item);
		n++;
		for(i=n; i>1; i--)
		{
			array[i-1]=array[i-2];
		}
		array[0]=item;
		printf("\n resultanting array element");
		for(i=0;i<n;i++)
		{
			printf("\n%d",array[i]);
			
		}
		getch();
		return 0;
	}
}
