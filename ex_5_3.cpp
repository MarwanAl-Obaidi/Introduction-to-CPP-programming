#include <iostream>
using namespace std;

int main()
{
    int choice, first_number, second_number;

    cout << "Choose desired calculation:\n";
    cout << "1: subtraction\n";
    cout << "2: addition\n";
    cout << "3: multiplication\n";
    cout << "4: division\n";
    cout << "5: Remainder\n";
    cout << "Choose a calculation:";
    cin >> choice;

    cout << "Input first number:";
    cin >> first_number;
    cout << "Input second number:";
    cin >> second_number;

    switch (choice)
    {
    case 1:
        cout << first_number << "-" << second_number << " = " << first_number - second_number << endl;
        break;

    case 2:
        cout << first_number << "+" << second_number << " = " << first_number + second_number << endl;
        break;

    case 3:
        cout << first_number << "*" << second_number << " = " << first_number * second_number << endl;
        break;

    case 4:
        cout << first_number << "/" << second_number << " = " << first_number / second_number << endl;
        break;

    case 5:
        cout << "Remainder: " << first_number % second_number << endl;
        break;

    default:
        cout << "Next time try pressing a number between 1-3!" << endl;
        break;
    }

    return 0;
}