// Sum of two numbers in C
#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, sum;
    printf("Enter two numbers: ");     // display message to the user

    scanf("%d",&a);                   // takes input from the user and stores it in variable a

    scanf("%d",&b);                  // takes input from the user and stores it in variable b

    sum = a + b;                    // calculates the sum of a and b and stores it in variable sum

    printf("Sum = %d", sum);       // displays the sum to the user
    
    return 0;
}