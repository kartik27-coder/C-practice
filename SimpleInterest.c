// program to find the simple interest in C
#include <stdio.h>
int main (){
float p,r,t,si;     // create variables
 
p=100;             // assigned values for the variables
r=10;
t=2;
 
si=(p*r*t)/100;      // calculating simple interest
 
printf("simple interest of given data = %f",si);       // displaying the calculated SI as output
return 0;
}
