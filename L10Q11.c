#include <stdio.h>

void revnaturalnums(int n)
{
    if (n==1)
        printf("%d\n",n);
    else
    {
        printf("%d ",n);
        revnaturalnums(n-1);
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d Natural numbers in reverse: \n",n);
    revnaturalnums(n);
}