class Solution {
public:
    int longestValidParentheses(string s) {
        
        int n=s.length();
        
        if(s.empty())
            return 0;
        
        stack <int> st;
        st.push(-1);
        
        int len=0;
        
        for(int i=0; i<n;  i++){
            if(s[i]=='('){
                st.push(i);
            }
            else{
                if(!st.empty())
                    st.pop();
                    
                if(!st.empty()){
                    len=max(len, i-st.top());
                }else{
                    st.push(i);
                }
            }
        }
        return len;
        
    }
};