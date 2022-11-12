#include <iostream>
using namespace std;

int main()
{
    int number, i = 1;

    cout << "Input an integer:";
    cin >> number;

    while (i <= number)
    {
        cout << i << endl;
        i++;
    }

    return 0;
}