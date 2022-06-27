#include <stdio.h>
int recursivesum(int n)
{
    if (n>=1)
        return n+recursivesum(n-1);
    return 0;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The sum of first %d natural numbers is: %d\n",n,recursivesum(n));
}