#include <stdio.h>
#include <stdlib.h>

int main (){

int a;
float b,i,h;
system("cls"); //must use the <stdlib.h> for using this command other wise it will show error.

printf("Please input the value of n for the H.P : ");
scanf("%d", &a);

b = 0;

for (i = 1; i <= a; i++)
{
    h = 1/i;
    b = b + h;
}

printf("\nThe H.P for %d is : %f \n\n",a,b);
return 0;
}