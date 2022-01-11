#include <stdio.h>
// #include <math.h>

int main(){

    double amount, paise;
    system("cls");

    printf("Hello input amount in Rupees : ");
    scanf("%lf", &amount);

    printf("\n %.lf paise",amount*100); //here we are converting rupees into paise by multiplying it by 100.

  
    return 0;

}

//above here we are using truncf since we don't know how many decimals the user will supply.
//truncf(amount)