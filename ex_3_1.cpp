#include <iostream>
using namespace std;

int main()
{
    float dollar, euro;
    euro = 0.727802;

    cout << "How much dollars do you want to exchange:";
    cin >> dollar;

    cout << "Amount in euros: " << dollar * euro << "\n";

    return 0;
}