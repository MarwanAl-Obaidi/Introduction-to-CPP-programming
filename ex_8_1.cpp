#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "The program calculates the total amount of" << endl;
    cout << "work hours during a given time frame and the average work day length." << endl;
    cout << "How many days:" << endl;
    cin >> n;
    double arr[n];
    double totalHours = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Input hours of workday " << (i + 1) << ": ";
        cin >> arr[i];
        totalHours += arr[i];
    }
    cout << "Total work hours: " << totalHours << endl;
    cout << "Average work day length: " << (totalHours / n) << endl;
    cout << "Inputted hours: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "" << endl;

    return 0;
}