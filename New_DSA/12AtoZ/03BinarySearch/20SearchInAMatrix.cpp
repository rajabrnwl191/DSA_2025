// O(N+logM)
int BinarySearch(vector <vector <int>> &mat, int r, int M, int X){
        int s=0,e=M-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(mat[r][mid]==X)return 1;
            else if(mat[r][mid]<X){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return 0;
    }
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    // your code here
	    for(int i=0;i<N;i++){
	        if(X<=mat[i][M-1]){
	           if(BinarySearch(mat,i,M,X))return 1;
	        }
	    }
	    return 0;
	}