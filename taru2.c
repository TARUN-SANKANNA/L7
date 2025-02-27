#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=2;i<=n/2 || n<2; i++)
    {
        if(n%i==0 || n<2)
        {
            printf("%d is not a prime number \n",n);
            break;
        }
        if(i==n/2)
        {
            printf("%d is a prime number \n",n);
            
        }
    }
    return 0;
}
