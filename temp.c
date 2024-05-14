#include <stdio.h>
#include <ctype.h>

void main(){
    
    char unit;
    float temp;

    printf("Is the temperature in Degrees Celsius (C) or Fahrenheit (F)? ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit == 'C'){
        printf("\nYou have selected Degrees Celsius.");
        printf("\nEnter the temperature reading: ");
        scanf("%f", &temp);
        temp = (temp * 1.8)+32;
        printf("\nThe temperature in Fahrenheit is: %.2f", temp);
    }
    else if(unit == 'F'){
        printf("\nYou have selected Fahrenheit.");
        printf("\nEnter the temperature reading: ");
        scanf("%f", &temp);
        temp = (temp - 32)/1.8;
        printf("\nThe temperature in Degrees Celsius is: %.2f", temp);
    }
    else{
        printf("\n%c is not a valid input", unit);
    }

}