#include <stdio.h>
int main()
{
    int arr[3][4];
    printf("Enter 12 elements: ");
    int i,j;
    for (i=0;i<3;i++)
        for (j=0;j<4;j++)
            scanf("%d",&arr[i][j]);
    printf("Printing the matrix: \n");
    for (i=0;i<3;i++)
    {
        printf("|");
        for (j=0;j<4;j++)
            printf("%d  ",arr[i][j]);
        printf("\b\b|\n");
    }
}