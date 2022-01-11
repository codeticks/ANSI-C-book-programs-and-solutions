#include <stdio.h>
int main (){

    float x,y;
    int a;

    printf("\nEnter the value for x: ");
    scanf("%f",&x);
    printf("\nEnter the value for y: ");
    scanf("%f",&y);

    a = x + y;

    printf("\nThe sum of x=%.2f and y=%.2f is %d",x,y,a);

    return 0;
}