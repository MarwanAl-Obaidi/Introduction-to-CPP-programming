#include <iostream>
using namespace std;

int main()
{
    int first_number;

    cout << "Input an integer: ";
    cin >> first_number;

    if (first_number % 2 == 0)
    {
        cout << "The number " << first_number << " is even.\n";
    }
    else if (first_number % 2 == 1)
    {
        cout << "The number " << first_number << " is odd.\n";
    }
    else
    {
        cout << "ERROR!";
    }

    return 0;
}