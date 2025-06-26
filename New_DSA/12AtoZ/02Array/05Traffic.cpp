int traffic(int n, int m, vector<int> vehicle) {
	// count maximum consecutive zeros and ones where zeros is max to m
	int zeros=0,j=0,ans=0;
        for (int i = 0; i < n; i++) {
          if (vehicle[i] == 0)
            zeros++;
			while(zeros>m){
				if(vehicle[j]==0)zeros--;
					j++;
			}
			ans=max(ans,i-j+1);
        }
		return ans;
       
}