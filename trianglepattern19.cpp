#include <iostream>
using namespace std;

int main(){

    int num = 5;
    int num2=1;

    for (int row = 0; row < num; row++)
    {
        // space

        for (int sp = num - row; sp >=0; sp--)
        {
            cout << " ";
        }
        for (int col = 1; col < row+1; col++)
        {
            cout<<col;
        }
        for (int col2 = 1; col2 < row; col2++)
        {
            cout<<col2;
        }
        cout << endl;
        

        
    }
    


    return 0;
}
