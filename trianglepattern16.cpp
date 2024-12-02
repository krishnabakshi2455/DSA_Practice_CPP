#include <iostream>
using namespace std;

int main()
{

    int num = 5;
    char chara = 'A';

    for (int row = 0; row < num; row++)
    {
        for (int col = row; col >= 1; col--)
        {
           cout << char(64 + col);
        }

        cout << endl;
    }

    return 0;
}