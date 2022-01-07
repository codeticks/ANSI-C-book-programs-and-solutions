#include <stdio.h>
#include <math.h>

int main (){

    float a,b,c,s,m,n,o,p,area;
    system("cls");
    printf("Enter the sides a ,b and c : ");
    scanf("%f %f %f", &a, &b, &c);
    s = (a+b+c)/2;
    m = s - a;
    n = s - b;
    o = s - c;
    p = m * n * o;
    area = sqrt(s * p);
    printf("%f",area);
    return 0;
}