vector<int> findBall(vector<vector<int>>& grid) {
  int m=grid.size();
  int n=grid[0].size();
  vector<int>ans;
  for(int col=0;col<n;col++){
      int flag=0;
      int j=col,i=0;
      for(;i<m&&j<n;i++){
          //neighbour
          if(grid[i][j]==1){
              if(j==n-1||grid[i][j+1]==-1){
                  flag=1;
                  break;
              }
              j++;
          }
          else if(grid[i][j]==-1){
              if(j==0||grid[i][j-1]==1){
                  flag=1;
                  break;
              }
              j--;
          } 
      }
      if(flag==1)ans.push_back(-1);
      else ans.push_back(j);

  }
  return ans; 
}