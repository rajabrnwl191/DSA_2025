#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& a, int k){
     int n=a.size(),ans=0,sum=0;
     unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum==k){
            ans=max(ans,i+1);
        }
        int rem=sum-k;
        if(mp.find(rem)!=mp.end()){
            ans=max(ans,i-mp[rem]);
        }
        if(mp.find(sum)==mp.end())
        mp[sum]=i;
    }
    return ans;
}