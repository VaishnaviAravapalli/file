#include<stdio.h>
void main()
{
	int num,n,new;
	printf("Enter a number");
	scanf("%d",&num);
	printf("Enter bit to toggle");
	scanf("%d",&n);
	new = num ^(1 << n);
	printf("num befire is %d and num after toggle is %d",num,new);
}
