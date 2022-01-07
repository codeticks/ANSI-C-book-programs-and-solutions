#include <stdio.h>
int main(){

float a,b,c,x;
system("cls");

    printf("Enter a,b and c\n");
    scanf("%f %f %f",&a,&b,&c);
    x = a/(b-c);
    printf("The value is: %f", x);


return 0;
}