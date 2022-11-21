#include<iostream>
using namespace std;

int main(){

    char ch;
    cout<<"Enter the charecter: ";
    cin>>ch;

    if(ch>48 && ch<57){
        cout<<"It is a number!!";
    }
    else if(ch>65 && ch<90){
        cout<<"It is Uppercase!!";
    }
    else if(ch>97 && ch<122){
        cout<<"It is Lowercase!!";
    }
    else{
        cout<<"It is a Symbol!!";
    }

    return 0;
}