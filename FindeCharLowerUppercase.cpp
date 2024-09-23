#include <iostream>
using namespace std;

int main(){

    char ch;
    cout<<"enter char :"<< endl;
    cin>>ch;
    if (ch>='a'&&  ch<='z'){
        cout<<"lower case"<<endl;
    }else{
        cout<<"upper case"<<endl;
    }


    return 0;
}