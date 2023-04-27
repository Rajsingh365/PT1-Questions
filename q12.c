#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,s;
    for(i=1;i<=100;i++)
    {
        for(j=i;j<=100;j++)
        {
           for(k=j;k<=100;k++)
            if(k*k==i*i+j*j)
                printf("%3d%3d%3d \n",i,j,k);
        }
    }
    return 0;
}
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int i,j,k,s;
//     for(i=1;i<=100;i++)
//     {
//         for(j=i;j<=100;j++)
//         {
//             s=i*i+j*j;
//             k=sqrt(s);
//             if(k*k==s&&k<=100)
//                 printf("%3d%3d%3d \n",i,j,k);
//         }
//     }
//     return 0;
// }
