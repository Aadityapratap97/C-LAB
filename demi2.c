#include<stdio.h>
void main()
{
    int a[3][3]={{1,2},{3,4},{5,6}};
    int i,j;
    for(i=0;i<3;i++)
    {
    for(j=0;j<2;j++)
    {
    printf("%d\t",a[i][j]);
    }
    printf("\n");
    }
}