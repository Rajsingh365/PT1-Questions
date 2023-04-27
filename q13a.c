#include<stdio.h>

int main()
{
    int i,j,k,lines;
    printf("Enter number of lines :");
    scanf("%d",&lines);
    for(i=1;i<=lines;i++)
    {
        k=1;
        for(j=1;j<=2*lines-1;j++)
        {
            if(j>=lines+1-i&&j<=lines-1+i)
            {
                printf("%d",k);
                j<lines?++k:--k;
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}