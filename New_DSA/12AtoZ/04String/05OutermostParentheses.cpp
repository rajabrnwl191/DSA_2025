 string removeOuter(string& s) {
        // code here
        stack<char>st;
        string ans="";
        int open=0,close=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='('){
                st.push('(');
                open++;
            }
            else{
                if(open-close==1) {
                    string subans="";
                    while(open+close>1){
                        subans=st.top()+subans;
                        if(st.top()=='(')open--;
                        if(st.top()==')')close--;
                        st.pop();
                    }
                    st.pop();
                    open--;
                    ans+=subans;
                }
                else{
                    close++;
                    st.push(')');
                }
            }
        }
        return ans;
        
    }