#include <stdio.h>

void readArray(long long int arr[3][4])
{
    int i,j;
    printf("Enter 12 elements: ");
    for (i=0;i<3;i++)
        for (j=0;j<4;j++)
            scanf("%lld",&arr[i][j]);
}

void displayArray(long long int arr[3][4])
{
    int i,j;
    printf("Displaying the array: \n");
    for (i=0;i<3;i++)
    {
        printf("|");
        for (j=0;j<4;j++)
            printf("%lld  ",arr[i][j]);
        printf("\b\b|\n");
    }
}

void productArray(long long int arr1[3][4],long long int arr2[3][4],long long int res[3][4])
{
    int i,j;
    for (i=0;i<3;i++)
        for (j=0;j<4;j++)
            res[i][j]=arr1[i][j]*arr2[i][j];
}

int main()
{
    long long int arr1[3][4],arr2[3][4],prod[3][4];
    readArray(arr1);
    displayArray(arr1);
    readArray(arr2);
    displayArray(arr2);
    productArray(arr1,arr2,prod);
    printf("Product calculated\n");
    displayArray(prod);
}