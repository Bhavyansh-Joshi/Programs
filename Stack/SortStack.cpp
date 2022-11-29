//Code Studio "Sort a Stack" Problem Solution 

#include <bits/stdc++.h> 

void SortedInsert(stack<int>& stack, int a){
    if(stack.empty() || (!stack.empty() && stack.top()<a)){
        stack.push(a);
        return;
    }
    int b = stack.top();
    stack.pop();
    
   
    SortedInsert(stack, a);
    stack.push(b);
}


void sortStack(stack<int> &stack){
	// Write your code here
    if(stack.empty()){
        return;
    }
    int a = stack.top();
    stack.pop();
    sortStack(stack);
    SortedInsert(stack, a);
    
}