vector<vector<int>> triplet(int n, vector<int> &arr)
{
    // Write your code here.
    sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        if(i>0&&arr[i]==arr[i-1])continue;
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=arr[j]+arr[k]+arr[i];
            if(sum==0){
                vector<int>temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                temp.push_back(arr[k]);
                sort(temp.begin(),temp.end());
                ans.push_back(temp);
                j++;k--;
                while (j < k && arr[j] == arr[j - 1]) j++;
                while (j < k && arr[k] == arr[k + 1]) k--;
            }
            else if(sum<0)
                j++;
            else k--;
        }
    }
    return ans;    
}
