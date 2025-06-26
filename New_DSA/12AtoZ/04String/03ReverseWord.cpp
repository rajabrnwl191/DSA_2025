string reverseWords (string s)
    {
        //code here.
        string ans="",temp="";
        int i=0,n=s.length();
        while(i<n){
            if(s[i]=='.'){
                temp=temp+".";
                ans=ans+temp;
                temp="";
            }
            else
                temp=s[i]+temp;
                
            i++;
        }
        ans=ans+temp;
        return ans;
    }