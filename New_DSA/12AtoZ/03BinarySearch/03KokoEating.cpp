int helper(vector<int>&piles, int N,int h){
        int sh=0;
        for(int i=0;i<N;i++){
            sh+=ceil(piles[i]/h);
        }
        return sh;
    }
    int Solve(int N, vector<int>& piles, int H) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            int h=helper(piles,N,mid);
            if(h<=H){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            
        }
        return low;
    }