#include<stdio.h>
#include<conio.h>
int main()
{
	long int z;
	printf("Please input a value:\n");
	scanf("%d",&z);
if(z==0)
		printf("The given value is Zero\nPlease enter a value greater then zero");
	else if (z<0)
		printf("The given value is negative\nPlease enter a positive value");
	else{
	printf("The square value of the input is:%d\n",z*z);

	if(z%2==0)
		printf("The given input is an even number");
	else
		printf("The given value is an odd number");
}
	return 0;
}
