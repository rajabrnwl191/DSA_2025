// O(N+M)
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int r=0,c=m-1,ans=-1,cnt=0;
        while(r<n && c>=0){
            if(arr[r][c]==0) r++;
            else if(arr[r][c]==1){ c--; ans=r;}
        }
        return ans;
	}

// O(Nlog(M))
int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int cnt=0,ans=-1;
	    for(int r=0;r<n;r++){
	        int subcnt=0;
	        int cs=0,ce=m-1;
	        while(cs<=ce){
	            int mid =(cs+ce)/2;
	            if(arr[r][mid]==0){
	                cs=mid+1;
	            }
	            else{
	                subcnt=m-mid;     
	                ce=mid-1;
	            }
	        }
	        if(subcnt>cnt){
	            cnt=subcnt;
	            ans=r;
	        }
	    }
	    return ans;
}