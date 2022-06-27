#include <stdio.h>
void readArray(int arr[3][4])
{
    int i,j;
    printf("Enter 12 elements: ");
    for (i=0;i<3;i++)
        for (j=0;j<4;j++)
            scanf("%d",&arr[i][j]);
}

void displayArray(int arr[3][4])
{
    int i,j;
    printf("Displaying the array: \n");
    for (i=0;i<3;i++)
    {
        printf("|");
        for (j=0;j<4;j++)
            printf("%d  ",arr[i][j]);
        printf("\b\b|\n");
    }
}

void sumArray(int arr1[3][4],int arr2[3][4],int res[3][4])
{
    int i,j;
    for (i=0;i<3;i++)
        for (j=0;j<4;j++)
            res[i][j]=arr1[i][j]+arr2[i][j];
}

int main()
{
    int arr1[3][4],arr2[3][4],sum[3][4];
    readArray(arr1);
    readArray(arr2);
    sumArray(arr1,arr2,sum);
    displayArray(sum);
}