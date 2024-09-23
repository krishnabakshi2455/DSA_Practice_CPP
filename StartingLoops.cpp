#include <iostream>
using namespace std;

int main()
{

    int num1 = 1;

    // for (int i = 0; i <= 10; i++)
    // {
    //     cout << "krishna "<< i << endl;
    // }

    // nested loops

    for (int i = 0; i < 5; i++)
    {
        cout<<"*"<<endl;
        for (int j = 0; j <= i; j++){
            cout << "*";
        }
    }
    

    return 0;
}