#include <stdio.h>
#include <math.h>
#define PI 3.14159265359

int main(){

    float x1 = 2, x2 = 5, y1 = 2, y2 = 6, m,n,r,a,c,d;
    system("cls");
        //calculating the distance between the to points and that distance will be the diameter of the circle and after dividing it by 2 we will get the radius of the circle.

        m = x2 - x1;
        n = y2 - y1;
        d = sqrt(m*m + n*n);
        r = d/2;

    printf("\nThe diameter of the circle is: %f, and the radius is: %f", d,r);

        //Now calculating the area.

    a = PI * r*r;
    printf("\nThe area of the Circle is: %f", a);

    return 0;
}
