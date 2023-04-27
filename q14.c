#include<stdio.h>

void main()
{
    int n,sum=0;
    printf("Enter Number of elements :");
    scanf("%d",&n);
    int a[n],i,big,small;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    small=big=a[0];
    for(i=1;i<n;i++)
    {
    if(big<a[i])
    big=a[i];
    
    if(small>a[i])
    small=a[i];
    }
    for(i=0;i<n;i++)
    sum=sum+a[i];
    float avg=(float)sum/n;
    printf("Smallest number is %d and largest Number is %d and range is %d , also average is %f",small,big,big-small,avg);
}