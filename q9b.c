#include<stdio.h>

int main()
{
    int i,n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    if(n%i==0)
    break;
    if(n==i)
    printf("%d is a prime Number ",n);
    else 
     printf("%d is not a prime Number ",n);
    return 0;
}