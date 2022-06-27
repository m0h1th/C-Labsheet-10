#include <stdio.h>
void printArray(int arr[],int n)
{
    if (n>0)
    {
        printArray(arr,n-1);
        printf("%d ",arr[n-1]);
    }
}

int main()
{
    int arr[10],n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("The elements of the array are: ");
    printArray(arr,n);
    printf("\n");
}