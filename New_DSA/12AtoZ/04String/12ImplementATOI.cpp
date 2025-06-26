    int myAtoi(string s) {
        int i=0,n=s.size(),pos=1;
        //remove white space
        while(i<n&&s[i]==' ')
            i++;
        //check negative
        if(s[i]=='-'){
            pos=0;
            i++;
        }
        else if(s[i]=='+')i++;
        //skip 0;
        while(i<n&&s[i]=='0')
            i++;
        long long ans=0;
        while(i<n){
            int x=s[i];
            if(x>=48&&x<=57) {
                x-=48;
                ans=ans*10+x;
            }
            else 
                break;
            if(ans>=INT_MAX)
                if(pos==0)
                    if(ans==INT_MAX)
                        return -INT_MAX;
                    else return INT_MIN; 
                else
                    return INT_MAX; 
            i++;
        }
        if(pos==0){
            ans=-ans;
        }
        return int(ans);
    }
    //
       int myAtoi(string s) {
        int i=0,n=s.size(),pos=1;
        //remove white space
        while(i<n&&s[i]==' ')
            i++;
        //check negative
        if(s[i]=='-'){
            pos=0;
            i++;
        }
        else if(s[i]=='+')i++;
        //skip 0;
        while(i<n&&s[i]=='0')
            i++;
        long long ans=0;
        while(i<n){
            int x=s[i];
            if(x>=48&&x<=57) {
                x-=48;
                ans=ans*10+x;
            }
            else 
                break;
            if(pos==0&&ans>INT_MAX)return INT_MIN; 
            if(pos==0&&ans==INT_MAX)return -(INT_MAX); 
            if(ans>=INT_MAX)return INT_MAX; 
            i++;
        }
        if(pos==0){
            ans=-ans;
        }
        return int(ans);
    }