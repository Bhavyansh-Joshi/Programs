//Reverse a string using stack

#include <iostream>
#include <stack>
using namespace std;

int main(){

    string str = "Hello World";

    stack<char> s;

    for(int i=0; i<str.size(); i++){
        char ch = str[i];
        s.push(ch);
    }

    string ans = "";

    for(int i=0; i<str.size(); i++){
        char ch = s.top();
        s.pop();
        ans += ch;
    }
    cout<<ans<<endl;

    return 0;
}