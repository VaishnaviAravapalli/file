#include<stdio.h>
void main()
{
	int num 1,num2;
	printf("Enter any 2 numbers");
	scanf("%d %d",&num1,&num2);
	num1 ^= num2;
	num2 ^ = num1;
	num1 ^ =num2;
	printf("After swapping is %d & %d",num1,num2);
}

