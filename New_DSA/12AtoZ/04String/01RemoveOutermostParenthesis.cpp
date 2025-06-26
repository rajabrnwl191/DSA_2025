    string removeOuterParentheses(string s) {
        string ans="";
        int rm=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                rm++;
                if(rm!=1)ans=ans+s[i];
            }else{
                if(rm!=1)ans=ans+s[i];
                rm--;
            }
        }
        return ans;
    }