#include <iostream>
using namespace std;

int main()
{

    int num = 6;

    for (int row = num; row > 0; row--)
    {
        for (int col = 0; col < row; col++)
        {
            cout<<row;
        }
        cout<<endl;
        
    }

    return 0;
}