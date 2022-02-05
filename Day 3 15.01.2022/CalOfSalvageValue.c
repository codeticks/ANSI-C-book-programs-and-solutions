#include <stdio.h>
#include <stdlib.h>
int main(){
float salvageV, d, salvage, PurchaseP, Depreciation, yearsofS;
system("cls");

printf("This is a program to calculate the salvage value.\n\n");
printf("Enter years of service : ");
scanf("%f",&yearsofS);
printf("\nEnter the Purchase Price: ");
scanf("%f",&PurchaseP);
printf("\nEnter the Depreciation: ");
scanf("%f",&Depreciation);

salvage = (Depreciation * yearsofS);
d = PurchaseP - salvage;
printf("Salvage value = %.2f",d);
    return 0;
}