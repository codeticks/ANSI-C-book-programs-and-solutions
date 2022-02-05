//write a program that will read a real number from the keyboard and print the following output in one line:
#include <stdio.h>
#include <stdlib.h>

int main(){

float numerator, denominator, bNum;
double realnum;

printf("This program will print the smallest and the largest integer just close to the number\n\n\n");
printf("Enter the numerator and denominator : ");
scanf("%f %f", &numerator, &denominator);

    if(denominator != 0)
    {
        realnum = numerator / denominator;
        bNum = realnum + 1; //here i am trying a formula i made my self to print the next big number after the Real number.
        printf("Smallest integer not less than the number : %.f\t The given number : %f\t Largest integer not greater than the number : %.f", realnum, realnum, bNum);
    }

    else{
        printf("The given number is not a real number, since Q = 0");
    }


return 0;
}