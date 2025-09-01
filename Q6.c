// Q6: Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main(){
    int num1, num2, temp;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Before swapping: num1 = %d, num2= %d\n", num1, num2);
    // swap logic using athird variable
    temp = num1; // store value of num1 in temp
    num1 = num2; // assigns value of num2 in num1
    num2 = temp; // temp assigns orignal value of num1 to num2
    printf("After swapping: num1= %d, num2 = %d\n", num1, num2);
    return 0;
     

}

