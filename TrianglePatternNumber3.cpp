#include <iostream>
using namespace std;

int main(){
    int num=5;


    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout<< (row +1);
        }
        cout<<endl;
        
    }
    


    return 0;
}