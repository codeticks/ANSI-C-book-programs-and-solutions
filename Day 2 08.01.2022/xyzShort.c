#include <stdio.h>

int main(){


    int x, y;
    short int z;
    printf("Enter the value for x: ");
    scanf("%d",&x);

    printf("Enter the value for y: ");
    scanf("%d",&y);

    z = x + y;

    printf("The sum of %d and %d is : %d",x ,y ,z);
    // when i add 123456 + 123456 then the output is -15232,the ans should have been 2,46,912 

    return 0;
}