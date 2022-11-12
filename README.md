# Introduction-to-CPP-programming
A refresher course I did that teaches the fundamentals of CPP programming.

## ex_1_1
The purpose of this exercise is to introduce you to writing programs with C++. Below is a C++ program. Your task is to rewrite it. In the next chapter you will learn how the program functions and what it actually does.

```
#include <iostream>
using namespace std;

int main()
{
  int number;

  cout << "Input an integer:";
  cin >> number;
  cout << "You typed: " << number << endl;
}
```

## ex_2_1
Write a working C++ program that, when started, prints the text: “Hi everybody!” and a line break on screen. After printing the program shuts down.

## ex_2_2
Write a program that asks user for two integers, calculates their sum and prints it on screen. After printing the program shuts down.

## ex_3_1
Write a program that asks user for amount of dollars and converts them to euros. In the end the program prints the amount of euros on screen. The exchange rate for euros is 0.727802. Use variables of the type double.

## ex_3_2
Write a program that asks for the circle radius and calculates the area of the circle based on it. In the end the area is printed on screen. Use the approximate value of 3.142 for π. User is expected to input only integers.

## ex_4_1
Write a program that asks user for two integers and prints the sum, difference, product and remainder of the two numbers.

## ex_4_2
Write a program that calculates the hypotenuse of an orthogonal triangle based on the triangle legs inputted by the user. The leg lengths are assumed to be integers and the hypotenuse value is assigned into a double type variable.

## ex_5_1
Write a program that asks user for an integer and checks if the number is even or odd. If the number is even, program prints “Number X is even.” and if it is odd, program prints “Number X is odd.”. X marks the inputted number.

## ex_5_2
Write a program which asks the user whether they prefer coffee or tea, and how many sugar cubes they put in. The program's output depends on the user's answers:

* Coffee, 0-2 cubes: "Coffee certainly is invigorating!"
* Coffee, 3+ cubes: "Well, coffee can taste pretty intense..."
* Tea, 0-2 cubes: "Tea can have a soothing effect!"
* Tea, 3+ cubes: "Guess you enjoy your tea overly sweet?"
* Otherwise: "An error occurred in the program!"

The sugar cubes are handled as an integer variable and the drink as a character variable ('c'/'t'). Uppercase can be ignored. This exercise is bugged as it requires 'k' instead of the 'c' as requested.

## ex_5_3
Enhance the previous calculator program so that the user can choose which operation he wants to perform. The program first asks for the performed calculation. After this the program asks for the integers, performs the calculation and prints the result. Make the choice structure with switch() statement.

## ex_6_1
Write a program that asks user for an integer n ((n>0) and prints the numbers 1,2,3..n on individual rows. Use for-loop in the program.

## ex_6_2
Write a program that asks user for an integer n (n>0) and prints the factorial of that number on screen. Example: factorial of n is marked with n!, which means 1*2*3...n.

## ex_6_3
Write a program that asks for student's exam grades (integers 4-10 inclusive) and prints the average of the given numbers. Integers outside of the 4-10 range should not be included when calculating the average. Program receives numbers until input is finished by inputting a negative number. Finally the program prints the amount of grades and their average.