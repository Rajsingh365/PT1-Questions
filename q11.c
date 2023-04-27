#include<stdio.h>

int main()
{
    int i,n,rev;
    for(i=10000;i<=24999;i++)
    {
        rev=0;
        n=i;
        while(n)
        {
            rev=rev*10+n%10;
            n/=10;
        }
        if(4*i==rev)
        printf("%d \n",i);
    }

    return 0;
}