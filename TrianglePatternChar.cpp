#include <iostream>
using namespace std;

int main()
{

    int num = 5;
    char ch = 'A';

    for (int row = 0; row < num; row++)
    {

        for (int col = 0; col < row + 1; col++)
        {
            cout << ch;
        }

        cout << endl;
        ch++;
    }

    return 0;
}