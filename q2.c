//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient
#include<stdio.h>
int main() {
    int num1, num2, sum, difference, product, quotient;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second numnber: ");
    scanf("%d", &num2);
    sum = num1+ num2;
    difference = num1 -num2;
    product = num1*num2;
    printf("The sum is: %d\n", sum);
    printf("The difference is: %d\n", difference);
    printf("The product is: %d\n", product);
    if (num2!=0)
        printf("Quotient: %.2f\n", num1/ num2);
    else
        printf("quotient: undefined ( divison by zero)\n");

    
    return 0;

}
