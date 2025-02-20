#include<iostream.h>
int main()
{
	float p1,p2,p3;
	printf("enter the height of 3 person\n");
	// printf("enter the age");
	scanf("%f%f%f",&p1,&p2,&p3);
	if((p1>p2 && (p1>p3))
			{
			ptintf("p1 is tallest");
			}
			else if ((p2>p1)&&(p2>p3))
			{
			printf("p2 is tallest");
			}
			else
			{
			printf("p3 is tallest");
			}
			return 0;
}
