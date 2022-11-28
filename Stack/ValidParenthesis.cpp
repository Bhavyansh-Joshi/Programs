//Code Studio "Valid Parentheses" qustion
//Leet Code Problem 20


class Solution {
public:
    bool isValid(string s) {
        
        stack<char> st;
        if(s.size()== 1){
            return false;
        }
        
        for(int i=0; i<s.size(); i++){
            char ch = s[i];
            if(ch == '(' || ch == '[' || ch == '{'){
                st.push(ch);
            }
            else{
                if(!st.empty()){
                    char c = st.top();
                    if((ch == ')' && c=='(') || (ch == '}' && c=='{') || (ch == ']' && c=='[')){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                        
                }
                else{
                    return false;
                }
            }
        }
        if(st.empty()){
            return true;
        }
        else{
            
            return false;
        }
    }
};