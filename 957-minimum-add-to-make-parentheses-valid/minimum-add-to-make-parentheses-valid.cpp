class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        st.push(s[0]);
        for(int i=1;i<s.size();i++){
            if(!st.empty()){
              char a=st.top();
              if(s[i]==')' && a=='('){
                st.pop();
              }
              else{
                 st.push(s[i]);
              }
            }
            else{
               st.push(s[i]);
            }
        }
        return st.size();
    }
};