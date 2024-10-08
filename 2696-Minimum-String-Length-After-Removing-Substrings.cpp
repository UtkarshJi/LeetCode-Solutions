class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        int n = s.size(); 
        for(int i=0; i<n; i++){ 
            if(s[i]=='B' && !st.empty() && st.top()=='A'){
                st.pop();
            }
            else if(s[i]=='D' && !st.empty() && st.top()=='C'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
    }
    return st.size();
    }
};
