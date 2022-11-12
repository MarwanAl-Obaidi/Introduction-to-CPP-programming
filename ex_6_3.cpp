#include <iostream>

using namespace std;

int main()

{
    float num;
    float sum = 0;
    float count = 0;
    int i = 0;

    cout << "Program calculates the test grade average." << endl;
    cout << "Finish inputting with a negative number." << endl;

    while (num >= 0)
    {

        cout << "Input grade (4-10) ";
        cin >> num;

        if (num >= 4 && num <= 10)
        {
            sum = sum + num;
            count++;
        }
    }

    cout << "You inputted " << count << " grades.\n";
    cout << "Grade average: " << sum / count << endl;

    return 0;
}