#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,x;
    float sum=0;
    printf("Enter The Number :");
    scanf("%d",&x);
    printf("Enter number of terms :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+pow(x,i);
    }
    printf("Sum is %f",sum);
    return 0;
}
