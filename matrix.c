#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("Enter the matrix elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter elements[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("MATRIX is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
}
