#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("numbers.txt");
    ofstream fout("numbers.txt", ios::app);
    if (!fin.is_open())
    {
        cout << "Failed to open file!" << endl;
        return -1;
    }
    int num, sum = 0;
    while (fin >> num)
    {
        sum += num;
    }
    fout << endl
         << sum;
    fin.close();
    fout.close();
    cout << "Sum is " << sum << endl;

    return 0;
}