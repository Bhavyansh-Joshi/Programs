//Code Studio " Reverse Stack Using Recursion " problem solved


void solve(stack<int> &stack, int n){
    
    if(stack.empty()){
        stack.push(n);
        return;
    }
    
    int a = stack.top();
    stack.pop();
    
    solve(stack, n);
    
    stack.push(a);
}


void reverseStack(stack<int> &stack) {
    // Write your code here
    if(stack.empty()){
        return;
    }
    int n = stack.top();
    stack.pop();
    reverseStack(stack);
    solve(stack, n);
    
}