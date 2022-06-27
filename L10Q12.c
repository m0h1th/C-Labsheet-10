#include <stdio.h>

int gcd(int a,int b)
{
    if (a==0)
        return b;
    return gcd(b%a,a);
}

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("The gcd of %d and %d is %d\n",a,b,gcd(a,b));
}