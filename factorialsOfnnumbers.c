//program to find the factorial on n number
#include<stdio.h>
int main (){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);            //taking the number 
        int product = 1;
        for(int i = 1 ; i<=n ; i++){                //using a loop
        product = product * i;                      //calculating the factorial here
        printf("The factorial of %d = %d\n",i,product);        //output
        }
    return 0;
}
