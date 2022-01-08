#include <stdio.h>

int add(int a, int b);
int sub(int x, int y);
int main (){
    int c,d,cir,pir;

    system("cls");
        printf("Enter two numbers");
        scanf("%d%d",&c,&d);
        cir = add(c,d);
        pir = sub(c,d);
        printf("%d + %d = %d \n",c,d,cir);
        printf("%d - %d = %d",c,d,pir);

return 0;
}

int add (int a, int b) 
{
    int sum;
    sum = a + b;
    return(sum);
}

int sub (int x, int y)
{
    int minus;
    minus = x - y;
    return(minus);
}