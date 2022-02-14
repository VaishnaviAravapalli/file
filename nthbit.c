#include<stdio.h>
void main()
{
	int num,n,bit;
	printf("enter a number");
	scanf("%d",&num);
	printf("Enter the bit to search");
	scnaf("%d",&n);
	bit = (num >>n)&1;
	printf("The %d bit of %d is %d",n,num,bit);
}
