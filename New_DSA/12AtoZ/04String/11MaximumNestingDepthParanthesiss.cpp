    int maxDepth(string s) {
        int open=0,close=0,ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')open++;
            else if(s[i]==')')close--;
            ans=max(ans,open+close);
        }
        return ans;   
    }