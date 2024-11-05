#include <iostream>
using namespace std;

int main(){

    int num = 5;

    for (int row = 0; row < num; row++)
    {
        for (int col = row+1; col >=0; col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
        
    }
    

    return 0;
}