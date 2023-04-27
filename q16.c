#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter Number of terms :");
    scanf("%d",&n);
    int a[n],i,sum=0;
    printf("Enter the data :\n");
    float avg,sum_mean=0,mean_deviation;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    sum=sum+a[i];
    avg=(float)sum/n;
    for(i=0;i<n;i++)
    sum_mean=sum_mean+fabs(a[i]-avg);
    mean_deviation=sum_mean/n;
    printf("mean deviation is %f",mean_deviation);
}