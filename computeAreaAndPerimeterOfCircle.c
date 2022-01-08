#include <stdio.h>
#include <math.h>
#define PI 3.14159265359

int main(){
    float x1 = 0, x2 = 4, y1 = 0, y2 = 5, m,n,a,c,r;
    system("cls");

        //calculating the distance between two given points to find the r, radius of the circle.
        m = x2 - x1;
        n = y2 - y1;

    r = sqrt(m*m + n*n);
    printf("\nRadius of the circle using the given coordinate is : %f ",r);

    c = 2 * PI * r*r;
    printf("\n\nThe circumference of the circle is : %f", c);

    a = PI * r*r;
    printf("\n\nArea of the circle is : %f", a);
    
    return 0;
}