#include <stdio.h>
int power(int x,int y)
{
    if (y==1)
        return x;
    else if (y==0)
        return 1;
    return x*power(x,y-1);
}

int main()
{
    int x,y;
    printf("Enter the base: ");
    scanf("%d",&x);
    printf("Enter the power: ");
    scanf("%d",&y);
    printf("%d raised to %d is %d\n",x,y,power(x,y));
}