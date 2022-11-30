//Code Studio "Next Smallest Element" Problem Solution

#include<stack>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    stack<int> st;
    vector<int> arr2(n, -1);
    int j=0;
    st.push(-1);
    
    for(int i=n-1; i>=0; i--){
        while(st.top() >= arr[i]){
            st.pop();
        }
        arr2[i] = st.top();
        st.push(arr[i]);
    }
    return arr2;
}