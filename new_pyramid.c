
#include<stdio.h>
int main()
{
    int i, j, a=5;
    for(i=3;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d  ",a+j);
        }
        a++;
        printf("\n");
    }
}
