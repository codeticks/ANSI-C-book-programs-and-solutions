#include <stdio.h>
#include <stdlib.h>

int main(){

float priceRice,priceSugar;
system("cls");

printf("\nEnter the price of one k.g of Rice: ");
scanf("%f",&priceRice);

printf("\nEnter the price of one k.g of Sugar: ");
scanf("%f",&priceSugar);

printf("\n*****List of Items*****");
printf("\n\nItem    Price");
printf("\nRice    Rs %.2f",priceRice);
printf("\nSugar   Rs %.2f\n\n",priceSugar);

return 0;
}