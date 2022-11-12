#include <iostream>
using namespace std;

int main()
{
    int integer, factorial = 1;

    cout << "Input an integer:";
    cin >> integer;

    for (int i = 1; i <= integer; ++i)
    {
        factorial *= i;
    }
    cout << "The factorial of number " << integer << " is " << factorial << endl;

    return 0;
}