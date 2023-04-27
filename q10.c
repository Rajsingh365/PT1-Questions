#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,num,count,sum,j;
    for(i=100;i<=9999;i++)
    {
        sum=0;
        count=0;
        n=num=i;
        while(n)
        {
            n/=10;
            count++;
        }
        if(count==3)
        {
            for(j=1;j<=count;j++)
            {
            sum=sum+pow(num%10,count);
            num/=10;
            }
        }
        else
        {
            for(j=1;j<=count;j++)
            sum=sum+pow(num%10,count);
            num/=10;
        }
        if(i==sum)
        printf("%d\n",i);

    }
    return 0;
}