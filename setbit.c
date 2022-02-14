#include<stdio.h>
void main()
{
	int num,n,new;
	printf("Enter a number");
	scanf("%d",&num);
	printf("Enter set bit");
	scanf("%d",&n);
	new=(1<<n)/|num;
	printf("Num before setti8ng is %d",num);
	printf("After setting bit is %d",new);
}
