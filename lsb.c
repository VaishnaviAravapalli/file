#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number");
	scanf("%d",&num);
	if(num&1)
		printf("LSB of %d is set",num);
	else
		printf("LSB of %d is not set",num);
}
