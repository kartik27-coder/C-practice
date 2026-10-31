// write a pragrame to find the total time in minutes.
#include<stdio.h>
int main (){
    int min,hr;
    printf("Enter the hour(s) : ");
    scanf("%d",&hr);
    printf("Enter the minute(s) : ");
    scanf("%d",&min);
    min = min + ( hr * 60 );
    printf("The total time in minutes is %d", min );
    return 0;
}