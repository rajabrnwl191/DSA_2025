int subarraysDivByK(vector<int>& nums, int k) {
        int ans=0,n=nums.size(),sum=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int rem=sum%k;
            if(rem==0)ans++;
            if(rem<0)rem+=k;
            if(mp[rem]>0)ans+=mp[rem];
            mp[rem]++;
        }
        return ans;
    }