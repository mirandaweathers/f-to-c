/* * * * * * * * * * * * * * * * * * * * * * * * *
*                                                *
*         COP2220 Spring 2021: Project 1         *
*                                                *
*   This program takes user input for degrees    *
*   Fahrenheit and converts the value to         *
*   degrees Celcius with 2 decimal places.       *
*                                                *
*      AUTHOR: Miranda Weathers - N01482572      *
*             DATE: 18 February 2021             *
*                                                *
* * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>

int main(void){

   //declare variables
   float degreesFahrenheit = 0.0;
   float degreesCelsius = 0.0;

   //get degrees Fahrenheit input from user
   printf("Enter a value for degrees Fahrenheit: ");
   scanf("%f", &degreesFahrenheit);

   //convert entered Fahrenheit value to Celsius
   degreesCelsius = ((100.0 / 180.0) * (degreesFahrenheit - 32.0));

   //restate the entered value and print the result
   printf("You entered: %6.2f degrees Fahrenheit\n", degreesFahrenheit);
   printf("%6.2f degrees Fahrenheit is equal to %6.2f degrees Celsius.", degreesFahrenheit, degreesCelsius);

   //end main
   return 0;

}  //end program
