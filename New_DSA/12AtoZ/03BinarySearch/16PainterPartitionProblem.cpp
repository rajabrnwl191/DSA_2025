int counts(int arr[],int n, long long target) {
        int subarr = 1;
        long long sum= 0;
        for (int i = 0; i < n; i++) {
            if (sum+ arr[i] <= target) {
                sum += arr[i];
            }
            else {
                subarr++;
                sum = arr[i];
            }
        }
        return subarr;
    }
    long long minTime(int arr[], int N, int K)
    {
        // code here
        // return minimum time
        long long low = *max_element(arr, arr+N);
        long long high = INT_MAX;
        while(low<=high) {
            long long mid=low+(high-low)/2;
            int k=counts(arr, N,mid);
            if (k>K) {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }