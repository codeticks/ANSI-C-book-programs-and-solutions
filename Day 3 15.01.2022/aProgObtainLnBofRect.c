#include <stdio.h>
#include <stdlib.h>
int main (){
float a,b,c,d;
system("cls");
printf("Please enter the length of the rectangle : ");
scanf("%f",&a);

printf("Please enter the breadth of the rectangle : ");
scanf("%f",&b);

printf("The entered length and breadth of the rectangle is  %.2f , %.2f ",a,b);

c = 2*(a+b);
printf("\nThe perimeter of the rectangle is : %.2f unit",c);

d = a * b;
printf("\nThe area of the rectangle is : %.2f sq unit",d);
    
return 0;
}