#include <iostream>
#include <stack>
using namespace std;

int main(){

    //creation of stack
    stack <int> s;

    //push operation
    s.push(1);
    s.push(2);
    s.push(3);
    

    //pop operation
    s.pop();

    //top element
    cout<<"Top element: "<<s.top()<<endl;

    //size of stack
    cout<<"Size: "<<s.size()<<endl;

    //is stack empty
    if(s.empty()){
        cout<<"The stack is empty!!";
    }
    else{
        cout<<" Stack is not empty!!";
    }

    return 0;
}