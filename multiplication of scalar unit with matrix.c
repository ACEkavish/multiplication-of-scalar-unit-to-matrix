#include<stdio.h>
int main()
{
    int i,j,r,c,n;
    printf("Enter the number of rows:\n");
    scanf("%d",&r);
    printf("Enter the number of coloumn:\n");
    scanf("%d",&c);
    int a[r][c];
    printf("Enter the elements :\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the scalar u want to multiply :\n");
    scanf("%d",&n);
    printf("New matrix =\n");
     for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
           printf("%d  ",a[i][j]*n);
        }
        printf("\n");
    }
}
