//  Write a program to convert temperature from Celsius to Fahrenheit
#include<stdio.h>
int main() {
    float celcius, fahrenheit;
    printf("Enter temprature in celcius: ");
    scanf("%f", &celcius);
    fahrenheit = celcius*9/5 + 32;
    printf("%.2f celcius is equal to %.2f fahrenhiet\n", celcius, fahrenheit);
    return 0;



}
