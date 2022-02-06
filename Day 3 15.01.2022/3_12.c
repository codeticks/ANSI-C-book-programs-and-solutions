#include <stdio.h>
int main (){

int i;
float f;
double d;
char c;

printf("Size of integer is: %zu",sizeof(i));
printf("\nSize of charecter is: %zu",sizeof(c));
printf("\nSize of float is: %zu ",sizeof(f));
printf("\nSize of double is: %zu",sizeof(d));
return 0;
}