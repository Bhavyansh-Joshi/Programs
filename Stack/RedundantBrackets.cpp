//Code Studio "Redundant Brackets" Problem Solution


#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    
    stack<char> st;
 
    int i=0;
    while(i!=s.size()){
        if(s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
            char ch = s[i];
            st.push(ch);
        }
        else {
            if(s[i] == ')'){
                if(st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/'){
                    while(st.top() != '('){
                        st.pop();
                    }
                    st.pop();
                }
                else{
                    return true;
                }
                
            }  
        }
        i++;
    }
    return false;
}
