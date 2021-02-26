# f-to-c
A program which converts user input for degrees Fahrenheit to degrees Celsius and prints the result.

<h2>Problem Description</h2>

The goal of this project is to develop a program which gets a number value from user input representing degrees Fahrenheit, performs an operation to convert that number to degrees Celsius, and outputs the calculated value back to the user. This is achieved by declaring variables of the appropriate data type for both the user’s input (degrees Fahrenheit) and the calculated output (degrees Celsius); using scanf() and printf() functions to get and store input and give output using those variables; performing operations on the Fahrenheit variable to accurately convert it to Celsius; and specifying format requirements for the variables so that a minimum of six characters will be printed for the output, precise to two decimal places.

<h2>Identify data, variables, and variable types needed</h2>

<b>Data needed</b>: user input number for degrees Fahrenheit; calculated Fahrenheit-to-Celsius number output with possibility for a fractional number rounded to the hundredths

<b>Variables</b>: degreesFahrenheit; degreesCelsius

<b>Data types</b>: floating, which allows for fractions. 


<h2>Steps to solve the problem</h2>

1.	Include standard input/output header file
2.	Start main function
3.	Declare and initialize variables (degreesFahrenheit, degreesCelsius)
4.	Use scanf() to get a number input from user representing degrees Fahrenheit and save it to the variable degreesFahrenheit
5.	Update degreesCelsius value to be = (100.0/180.0)*(degreesFahrenheit–32.0)
6.	Use printf() to restate the entered value to the user
a.	Specify minimum of 6 characters and 2 decimal places
7.	Use printf() to display the converted temperature in degrees Celsius
a.	Specify minimum of 6 characters and 2 decimal places
8.	End program

Thanks for reading!
