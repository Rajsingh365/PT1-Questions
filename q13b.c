#include<stdio.h>

int main()
{
    int i,j,k,lines;
    printf("Enter number of lines :");
    scanf("%d",&lines);
    for(i=1;i<=lines;i++)
    {
        k=1;
        for(j=1;j<=lines;j++)
        {
            if(j<=i)
            printf("%d",k++);
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}