#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int first_number, second_number;

    cout << "Input first triangle leg:";
    cin >> first_number;

    cout << "Input second triangle leg:";
    cin >> second_number;

    cout << "Hypotenuse length: " << hypot(first_number, second_number) << "\n";

    return 0;
}