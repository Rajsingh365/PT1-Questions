#include<stdio.h>

int main()
{
    int number,k;
    printf("Enter a Number :");
    scanf("%d",&number);
    k=sqrt(number);
    if(k*k==number)
    printf("%d is perfect square ",number);
    else
    printf("%d is not a perfect square ",number);
    return 0;
}
