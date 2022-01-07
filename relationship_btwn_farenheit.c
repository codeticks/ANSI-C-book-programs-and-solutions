#include <stdio.h>
int main(){

    int celcius, farenheit;
    system("cls");
    printf("Input temperatue in any Celcius : ");
    scanf("%d",&celcius);
    farenheit = (9*celcius/5)+32;
    printf("%d",farenheit);
    return 0;
}

// we can do the same to convert the temperatur back and forth, but we can do that in just one program wihtout the help of loops, so i guess for the begininig we are dont here.