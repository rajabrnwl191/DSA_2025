    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int minans=nums[0],minsum=nums[0],maxans=nums[0],maxsum=nums[0],totalsum=nums[0];
        for(int i=1;i<n;i++){
            minsum=min(minsum+nums[i],nums[i]);
            minans=min(minsum,minans);
            maxsum=max(maxsum+nums[i],nums[i]);
            maxans=max(maxsum,maxans);

            totalsum+=nums[i];
        }
        int cirsum=totalsum-minans;
        if(cirsum==0)cirsum=maxans;
        return max(maxans,cirsum);
    }