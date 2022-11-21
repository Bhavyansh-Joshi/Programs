#include<iostream>
using namespace std;

int main(){
    
    char s[20];
    string st;
    cout<<"Enter The string: ";
    cin>>s;
    cout<<"Enter The string: ";
    cin>>st;
    
    cout<<"The string is: " <<s<<endl;
    cout<<"The string is: " <<st<<endl;
    st[2]='\0';
    cout<<"The string is: " <<st;


    return 0;
}