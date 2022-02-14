#include<stdio.h>
#define BITS sizeof(int) *8
void main()
{
	int num,msb;
	printf("Enter a number");
	scanf("%d",&num);
	msb =1<<(BITS-1);
	if((num&msb)==1)
		printf("msb of %d is set",num);
	else
		printf("msb of %d is not set",num);
}
