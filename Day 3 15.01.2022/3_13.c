#include <stdio.h>
int main(){
int num1, num2, num3, biggest;
//now i am trying to solve this by using the ternary operator:
printf("Enter three numbers: ");
scanf("%d %d %d", &num1, &num2, &num3);

biggest = num1 >= num2 ? (num1 >= num3 ? num1 : num3) : (num2 >= num3 ? num2 : num3); //tp be honest this logic was pretty complex to me at first.
printf("The biggest number is %d", biggest);
    return 0;
}


// #include <stdio.h>
// int main(){
// int num1, num2, num3;

// printf("Enter three numbers: ");
// scanf("%d %d %d", &num1, &num2, &num3);

// if (num1 >= num2 && num1 >= num3)
// {
// printf("The biggest among the three is: %d", num1);
// }
// else
// {
//     if(num3 >= num2)
//     printf("The biggest number among the three is: %d", num3);

//     else
//     printf("The biggest number among the three is: %d", num2);
// }
// //so finally in the third time it worked after spending so much time. But i used if and else if statements and i wasn't supposed to use them so i got ta make this program using the conditional operator now.

//     return 0;
// }










//attempted 2nd time, still very low luck.
// #include <stdio.h>
// int main(){

// int a,b,c;
// printf("Enter three number for a,b and c: ");
// scanf("%d %d %d",&a,&b,&c);

// if (a>=b && a>=c)
// {
//     printf("The biggest among three is: %d", c);
// }

// else if(b>=a && b>=c){
//     printf("The biggest among the three is: %d", b);
// }

// else if(c>=a && c>=b){
//     printf("The biggest among the three is: %d", a);
// }

// return 0;
// }

/*
.
.
.
.
.
.
.
.
*/

// this ain't worked. 
// #include <stdio.h>
// int main(){
// int a,b,c;
// printf("Enter the value of a,b and c:");
// scanf("%d %d %d",&a,&b,&c);
// printf("\nThe values assigned to a,b and c are: %d %d %d",a,b,c);

// if (a<b){
//     if(b<c){
//         printf("The largest number among three is: %d",c);
//     }
//     else{
//         printf("The largest number among three is: %d",b);
//     }
//    }
// else{
//     printf("The largest number among three is: %d",a);
// }


// return 0;
// }