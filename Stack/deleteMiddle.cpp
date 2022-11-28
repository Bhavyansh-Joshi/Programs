//Delete middle element from stack

//Approach 1: Using another stack

#include <bits/stdc++.h> 
void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
    stack<int> arr;
    int i=0;

    while(i != (N/2)){
        int a = inputStack.top();
        arr.push(a);
        inputStack.pop();
        i++;
    }
    inputStack.pop();
    
    while(!arr.empty()){
        int a = arr.top();
        inputStack.push(a);
        arr.pop();
    }
     
}

//Approach 2 : Recurssion

#include <bits/stdc++.h> 

void solve(stack<int>&inputStack, int N, int c){
    
    if(c == N/2){
        inputStack.pop();
        return;
    }
    
    int a = inputStack.top();
    inputStack.pop();
    
    solve(inputStack, N, c+1);
    inputStack.push(a);
}

void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
    int c=0;
    solve(inputStack, N, c);
    
    
   
}