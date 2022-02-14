#include<stdio.h>
int main()
{
	int num,n,new;
	printf("Enter a number");
	scanf("%d",&num);
	printf("Enter bit to clear");
	scanf("%d",&n);
	new=num&(~(1 << n));
	printf("Num before is %d",num);
	printf("Num after setting is %d",new);
}
