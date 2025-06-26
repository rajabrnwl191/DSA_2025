int find(int N){
        int x=N,M=N,len=0,cnt=0;
        int rem=N%10;
        N=N/10;
        while(N>0){
            len++;
            int r=N%10;
            if(r>rem){
                N=N-1;
                M=N;
                cnt=len;
            }
            rem=N%10;
            N=N/10;
        }
        while(cnt--){
            M=M*10+9;
        }
        return M;
    }