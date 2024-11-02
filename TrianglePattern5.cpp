#include <iostream>
using namespace std;

int main(){

    char chr = 'A';
    int num = 5;

    for (int row = 1; row < num; row++)
    {
        for (int col = 0; col < row; col++)
        {
            cout << chr;
        }
        cout << endl;
        chr = chr + 1;
        }
    



    return 0;
}