#include <stdio.h>
int main(){

    float x,y,sum,sub,mul,div;
    system("cls");
        
        printf("Enter two numbers to perform operation: ");
        scanf("%f %f",&x ,&y);

        printf("You enter X = %f, Y = %f\n", x, y);

        sum = x + y;
        printf("Sum = %f \t",sum);

        sub = x - y;
        printf("Difference = %f\n", sub);

        mul = x*y;
        printf("Product = %f\t", mul);

        div = x/y;
        printf("Division = %f", div);

    return 0;
}


//same program can even be written as

/*
#include <stdio.h>
int main(){

    float x,y,sum,sub,mul,div;
    system("cls");
        
    printf("Enter two numbers to perform operation: ");
    scanf("%f %f",&x ,&y);

    printf("You enter X = %f, Y = %f\n", x, y);

    printf("Sum = %f \t",(x + y));

    printf("Difference = %f\n", (x - y));

    printf("Product = %f\t", (x * y));

    printf("Division = %f", (x / y));

    return 0;
}



*/