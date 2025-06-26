 bool helper(vector<int>&stalls,int n,int k,int dis){
        k--;
        int last=stalls[0];
        for(int i=1;i<n;i++){
            if(stalls[i]-last>=dis){
                k--;
                last=stalls[i];
            }
            if(k<=0)return true;
        }
        return false;
    }
    int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin(),stalls.end());
        int low=1,mx=stalls[n-1]-stalls[0],ans=0;
        while(low<=mx){
            int mid=(low+mx)/2;
            bool x=helper(stalls, n,k,mid);
            if(x){
                ans=mid;
                low=mid+1;
            }
            else{
                mx=mid-1;
            }
        }
        
        return ans;
    }