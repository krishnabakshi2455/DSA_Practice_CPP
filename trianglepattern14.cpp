#include <iostream>
using namespace std;


int main (){
    int num = 5;
    int num2 = 0;
    for (int row = 0; row < num; row++)
    {
       for (int col = 0; col < row; col++)
       {
        cout<<num2;
        num2++;

       }
       cout<<endl;
       
        
    }
    

    return 0;
}