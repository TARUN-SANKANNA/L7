#include<stdio.h>
int main()
{
	int a;
	printf("enter the choice");
	scanf("%d",&a);
	switch(a)
	{ 
		case 1: printf("b-tech in CSE");
			break;
		case 2: printf("b-tech in AIML");
			break;
		case 3: printf("b-tech in ECE");
			break;
		case 4: printf("btech in MEC"):
			break;
		default: printf("enter the correct choice");
			 break;
	}
	return 0;
}
