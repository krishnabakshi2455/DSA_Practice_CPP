#include <iostream>
using namespace std;


int main(){

    int num = 5;

   for (int row = 0; row < num; row++)
   {
    // space

    for (int space = 0; space < row; space++)
    {
        cout << " ";
    }

    for (int col = 0; col < num-row; col++)
    {
        cout << row;
    }
    cout << endl;
    
    
   }
   
    

    return 0;
}