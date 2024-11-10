#include <iostream>
using namespace std;

int main()
{

    int num = 5;
    char ch = 'A';

    for (int row = 0; row < num; row++)
    {
        for (int col = row + 1; col > 0; col--)
        {
            ch--;
            cout << ch;
            ch++;
        }
        cout << endl;
    }

    return 0;
}