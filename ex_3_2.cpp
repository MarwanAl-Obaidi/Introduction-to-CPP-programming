#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float radius;

    cout << "Input circle radius:";
    cin >> radius;

    cout << "Circle area with the given radius: " << 3.142 * pow(radius, 2) << "\n";

    return 0;
}