#include<stdio.h>

int main()
{
    float a,b,c;
    printf("Enter Three Numbers :");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    printf("%d",a);
    else if(b>c)
    printf("%d",b);
    else
    printf("%d",c);
    return 0;
}
