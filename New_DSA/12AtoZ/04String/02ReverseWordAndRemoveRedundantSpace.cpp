string reverseWords(string s) {
        string ans="",temp="";
        int i=0,n=s.length();
        while(i<n){
            if(s[i]==' '){
                while(i<n&&s[i]==' '){
                    i++;
                }
                if(ans.size()==0)
                    ans=temp+ans;
                else
                    ans=temp+" "+ans;
                temp="";
            }
            else{
                temp+=s[i];
                i++;
            }
        }
        if(ans.size()==0)
            ans=temp+ans;
        else if(s[n-1]!=' ')
            ans=temp+" "+ans;
        return ans;
    }