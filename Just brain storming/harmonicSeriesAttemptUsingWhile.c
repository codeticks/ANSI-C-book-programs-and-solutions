#include <stdio.h>

int main(){

    float a,h,i,hSum;
    printf("Please enter the value for a : ");
    scanf("%f",&i);

    while (a <= i)
    {
        h = 1/a;
        a++ ;
    }

    hSum = 1 + h;


//of course this didn't worked out cz you gotta do this using the for formula and initialize the a var to be 0  and then add the progression.
    return 0;
}