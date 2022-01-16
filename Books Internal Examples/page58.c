#include <stdio.h>
#define N 100
#define A 2
int main (){
int a;
system("cls");
a = A;

while( a < N)
{
    printf("%d\n",a);
    a *= a;

}
return 0;
}