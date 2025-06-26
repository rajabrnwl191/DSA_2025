string roundToNearest(string s) {
        // Complete the function
        int n=s.length(),f=0;
        char r=s[n-1];
        if(r<='5'){
            s[n-1]='0';
        }else{
           int i=n-2;
           while(i>=0&&s[i]=='9')i--;
           if(i<0){
               i++;
               s[i]='1';
               f=1;
           }else
               s[i]=(int(s[i]-'0')+'1');
            i++;
           while(i<n){
               s[i]='0';
               i++;
           }
           if(f)s.push_back('0');
        }
        return s;
    }