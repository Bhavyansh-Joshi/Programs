//code studio  "Minimum cost to make a string valid" problem solution


#include <bits/stdc++.h> 
int findMinimumCost(string str) {
  // Write your code here
    stack<char> st;
    
    if(str.length() % 2 != 0){
        return -1;
    }
    
    int i=0, c=0;
    while(i!=str.size()){
        if(str[i] == '{'){
            st.push(str[i]);
        }
        else if(str[i] == '}' && !st.empty()){
            st.pop();
        }
        else if(str[i] == '}' && st.empty()){
            c++;
        }
        i++;
    }
    if(c%2 != 0){
        c+=2;
    }
    int a = st.size() + c;
    
    return a/2;
}