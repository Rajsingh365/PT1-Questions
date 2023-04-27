#include<stdio.h>

void main()
{
    int i,j,temp,n;
    printf("Enter number of terms :");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(j=1;j<10;j++)
    {
        for(i=0;i<n-j;i++)
        {
        if(a[i]>a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
        }
    }
    printf("Sorted array is \n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);

}