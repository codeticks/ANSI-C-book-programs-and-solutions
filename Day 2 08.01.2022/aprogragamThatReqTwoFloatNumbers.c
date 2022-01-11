#include <stdio.h>
#include <stdlib.h>
int main(){

float a,b,div;
system("cls");
printf("Please input the first number: ");
scanf("%f",&a);

printf("\nEnter your second number: ");
scanf("%f",&b);

div = a/b ;

printf("\nThe division of %.2f and %.2f is: %f ", a,b,div);

return 0;
}