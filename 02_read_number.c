/*
    A program that gets a number from the user and then displays it
*/

#include <stdio.h>

int main()
{
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Your number is: %d", n);
    
    return 0;
}
