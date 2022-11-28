//Code studio "Insert An Element At Its Bottom In A Given Stack" Problem using recursion


#include <bits/stdc++.h> 

void solve(stack<int>& myStack, int x, int n){
    
    if(myStack.empty()){
        myStack.push(x);
        return;
    }
    int a = myStack.top();
    myStack.pop();
    
    solve(myStack, x, n);
    myStack.push(a);
}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    int n = myStack.size();
    
    solve(myStack, x, n);
    return myStack;
    
}
