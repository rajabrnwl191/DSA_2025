 string largestOddNumber(string num) {
        int n=num.length(),ans=-1;
        for(int i=n-1;i>=0;i--){
            int d=num[i]-48;
            if(d%2==1){
                ans=i;
                break;
            }
        }
        if(ans==-1)return "";
        return num.substr(0,ans+1);
    }