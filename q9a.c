#include<stdio.h>

int main()
{
    int f,f1,f2,n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(f1=-1,f2=1;f<=n;f=f1+f2,f1=f2,f2=f)
    if(n==f)
     printf("The %d is a term of fibonacci series",n);
    if(f>n)
     printf("The %d is not a term of fibonacci series",n);
    return 0;
}
