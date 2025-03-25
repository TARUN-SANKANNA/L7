#include<stdio.h>
int main()
{
	int a;
	printf("enter the choice");
	scanf("%d",&a);
	switch(a)
	{
		case 1: printf("BTech in CSE");
			break;
		default: printf("enter the correct choice");
			 break;
	}
	return 0;
}
