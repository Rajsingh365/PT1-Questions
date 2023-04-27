#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,num,count=0,sum=0,no;
    printf("Enter a Number :");
    scanf("%d",&n);
    num=no=n;
    while(num)
    {
        num/=10;
        count++;
    }
    for(i=1;i<=count;i++)
    {
        sum=sum+pow(n%10,count);
        n/=10;
    }
    if(sum==no)
    printf("%d is a armstrong number",no);
    else
    printf("%d is not a armstrong number",no);
    return 0;
}