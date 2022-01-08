#include <stdio.h>
#define PI 3.142857
int main (){

    int radius, area;
    system("cls");

    printf("Enter the Radius of Circle");
    scanf("%d",&radius);
    
    area = PI*radius*radius;
    printf("The area of the circle is %d",area);

return 0;
}