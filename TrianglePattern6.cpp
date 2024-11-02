#include <iostream>
using namespace std;


int main(){

    int num = 5;
    int num2= 1;
    for (int row = 0; row < num; row++)
    {
        for (int col = 1 ; col < row; col++)
        {
            cout<<col;
        }
        cout<<endl;
        
    }
    

    return 0;
}