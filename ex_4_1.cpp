#include <iostream>
using namespace std;

int main()
{
    int first_number, second_number;

    cout << "Input first integer:";
    cin >> first_number;

    cout << "Input second integer:";
    cin >> second_number;

    cout << first_number << "+" << second_number << " = " << first_number + second_number << "\n";
    cout << first_number << "-" << second_number << " = " << first_number - second_number << "\n";
    cout << first_number << "*" << second_number << " = " << first_number * second_number << "\n";
    cout << "Remainder: " << first_number % second_number << "\n";

    return 0;
}