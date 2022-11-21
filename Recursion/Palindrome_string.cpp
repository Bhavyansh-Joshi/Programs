/* Ques: Check weather a string is palindrome or not*/

#include<iostream>
#include<string>
using namespace std;

bool pal(int n, string str, int a){

    if(str[a] != str[n-a-1]){
        return false;
    }

    pal(n, str, a+1);
    return true;
}

int main(){

    string str;
    cout<<"Enter the string to check weather a string is palindrome or not: ";
    cin>>str;

    int n = str.size(), a = 0;

    bool b = pal(n, str, a);

    if(b == true){
        cout<<"The string is palindrome!";
    }
    else{
        cout<<"The string is NOT palindrome!";
    }

    return 0;
}