#include <iostream>
using namespace std;

int main(){

    int num=5;
    char ch='A';

    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col <=row; col++){
            cout << ch;
            ch++;
        }
        cout << endl;
    }
    


    return 0;
}