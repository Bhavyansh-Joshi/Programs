//Leetcode problem 84. "Largest Rectangle in Histogram"

//Approach 1 : Brute Force (TLE)

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int area = 0, max = 0;
        int l = 0, b = 0;
        int j=0;
        for(int i=0; i<heights.size(); i++){
            j=i;
            area = heights[i];
            while(j < heights.size()-1 && heights[i] <= heights[j+1] ){
                area += heights[i];
                j++;
            }
            j=i;
            while(j > 0 && heights[i] <= heights[j-1]){
                area += heights[i];
                j--;
            }
            
            if(max < area)
                max = area;
            area = 0;
            
        }
        
        return max;
    }
};


//Approach 2 : Using Stack (prev and next smaller element)

class Solution {
public:
      
    vector<int> prevSmallerElement(vector<int> h, int n){
        stack<int> st;
        st.push(-1);
        vector<int> next(n);
        for(int i=0; i<n; i++){
            while(st.top()!=-1 && h[st.top()] >= h[i]){
                st.pop();
            }
            next[i] = st.top();
            st.push(i);
        }
        
        return next;
    }
    
     vector<int> nextSmallerElement(vector<int> h, int n){
        stack<int> st;
        st.push(-1);
        vector<int> prev(n);
        for(int i=n-1; i>=0; i--){
            while(st.top()!=-1 && h[st.top()] >= h[i]){
                st.pop();
            }
            prev[i] = st.top();
            st.push(i);
        }
        
        return prev;
    }
    
    
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        
        vector<int> prev(n);
        prev = prevSmallerElement(heights, n);
        
        vector<int> next(n);
        next = nextSmallerElement(heights, n);
        
        
        int area = INT_MIN;
        
        for(int i=0; i<n; i++){
            int l = heights[i];
            
            if(next[i] == -1){
                next[i]=n;
            }
            int b = next[i] - prev[i] - 1;
            
            int a = l*b;
            
            area = max(area,a);
        }
        return area;
    }
};
