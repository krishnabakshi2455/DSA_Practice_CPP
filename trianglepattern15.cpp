#include <iostream>
using namespace std;


int main(){

    int num =5;
    char aplha = 'A';

    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col < row; col++)
        {
            cout << aplha;
            aplha++;
        }
        cout << endl;

        
    }
    



    return 0;
}