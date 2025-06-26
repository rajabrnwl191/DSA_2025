vector<int> moveZeros(int n, vector<int> a) {
	int i=0;
	int j=0;
	while(j<n){
          if (j < n && a[j] == 0) {
            j++;
          } else {
            // swap
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
            i++;
            j++;
          }
        }
        while(i<n){
            a[i]=0;
            i++;
        }
	return a;
}
