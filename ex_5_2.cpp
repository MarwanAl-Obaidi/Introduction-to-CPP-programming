#include <iostream>

using namespace std;

int main()

{
    char drink;
    int sugar;

    cout << "Do you drink coffee or tea? (k/t) ";
    cin >> drink;

    cout << "With how many cubes of sugar? ";
    cin >> sugar;

    if (drink == 'c' && sugar >= 0 && sugar <= 2)
    {
        cout << "Coffee certainly is invigorating!\n";
    }

    else if (drink == 'c' && sugar >= 3)
    {
        cout << "Well, coffee can taste pretty intense...\n";
    }

    else if (drink == 't' && sugar >= 0 && sugar <= 2)
    {
        cout << "Tea can have a soothing effect!\n";
    }

    else if (drink == 't' && sugar >= 2)
    {
        cout << "Guess you enjoy your tea overly sweet?\n";
    }

    else
    {
        cout << "An error occurred in the program!\n";
    }

    return 0;
}