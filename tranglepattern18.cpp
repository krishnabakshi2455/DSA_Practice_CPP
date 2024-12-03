#include <iostream>
using namespace std;

int main(){

    int num = 5;
    char chara = 'A';

    for (int row = 0; row < num; row++)
    {
        // space
        for (int sp = 0; sp < row; sp++)
        {
            cout << " ";
        }

        for (int col = 0; col <num-row; col++)
        {
          cout<<chara;
        }
        chara++;
        cout<<endl;
    }
    return 0;
}
