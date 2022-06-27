#include <stdio.h>
//Recursive function to reverse a string
void reverse(char *str)
{
    if (*str)
    {
        reverse(str+1);
        printf("%c",*str);
    }
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s",str);
    printf("The reverse of the string is: ");
    reverse(str);
    printf("\n");
}