#include <stdio.h>
int main(){

int num,sum,hum;
printf("Please enter your number: ");
scanf("%d",&num);

sum = 0;

while(num>0){ //keep in mind the sign of greater than and less than make sure to use the more than symbol here.
    hum = num % 10;
    sum = sum + hum;
    num = num / 10 ;

}

printf("The sum of the digits of the given number is: %d", sum);
return 0;
}












// #include <stdio.h>

// int main(){

// int a,b,c,d,f,e;
// printf("Enter a four digit integer : ");
// scanf("%4d", &a);
// b = printf(" The sum of these four numbers are : %4d", e);
// c = printf(" The sum of these four numbers are : %3d", e);
// d = printf(" The sum of these four numbers are : %2d", e);
// f = printf(" The sum of these four numbers are : %1d", e);
// e = b+c+d+f;
// printf("The sum of the digits fo integer is :%d", e);

// return 0;
// }

//complete shitty and wrong