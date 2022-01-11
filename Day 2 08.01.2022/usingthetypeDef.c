#include <stdio.h>

int main (){

typedef int x,y,z; //now when ever i use the x it, will specify the data type int to the variabel used along with it
x hello;
printf("This program will use the type def : ");
scanf("%d",&hello);
printf("\nThis program will use now x as data type and print it: %d",hello);
return 0;
}