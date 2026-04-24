class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char>st;
        int i=0;
        while(i<n){
            if (s[i]=='{' || s[i]=='(' || s[i]=='['){
                st.push(s[i]);
                i++;
            }
            else{   
                    if (st.empty()) return 0;
                    if((s[i]==']' && st.top()=='[') || (s[i]==')' && st.top()=='(') || (s[i]=='}' && st.top()=='{')){
                    st.pop();
                    i++;
                    }
                    else return 0;
                }

        }
        return st.empty()==1;
    }
};
