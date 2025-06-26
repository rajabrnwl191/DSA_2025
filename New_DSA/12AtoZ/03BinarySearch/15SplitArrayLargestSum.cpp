int counts(int arr[],int n, int target) {
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
    int splitArray(int arr[] ,int N, int K) {
        // code here
        int low = *max_element(arr, arr+N);
        int high = accumulate(arr, arr+N, 0);
        while(low<=high) {
            int mid=(low+high)/2;
            int k=counts(arr, N,mid);
            if (k<=K) {
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }