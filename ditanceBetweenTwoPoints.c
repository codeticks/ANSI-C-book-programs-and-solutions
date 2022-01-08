#include <stdio.h>
int main(){

    float x1, x2, y1, y2, m, n, d;
    system("cls");
    
        printf("Enter x1 cordinate :");
        scanf("%f",&x1);

        printf("Enter x2 cordinate : ");
        scanf("%f",&x2);

        printf("Enter y1 cordinate : ");
        scanf("%f",&y1);

        printf("Enter y2 cordinate : ");
        scanf("%f",&y2);

            m = (x2 - x1);
            n = (y2 - y1);
            d = sqrt(m*m+n*n);

        printf("D of the given coordinates %f %f %f %f\, is %f:",x2, x1, y2, y1, d);

    return 0;
}