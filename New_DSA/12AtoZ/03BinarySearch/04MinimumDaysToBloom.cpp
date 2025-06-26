 int fun(int K, int day, vector<int> &bloomDay){
      int Bq=0,cnt=0;
      for(int i=0;i<bloomDay.size();i++){
          if(bloomDay[i]<=day){
              cnt++;
          }
          else{
              Bq+=(cnt/K);
              cnt=0;
          }
      }
       Bq+=(cnt/K);
      return Bq;
  }
    int solve(int M, int K, vector<int> &bloomDay){
      // Code here
      if(M*K>bloomDay.size())return -1;
      int low=*min_element(bloomDay.begin(),bloomDay.end());
      int high=*max_element(bloomDay.begin(),bloomDay.end());
      while(low<=high){
          int mid=low+(high-low)/2;
          int Bq=fun(K,mid,bloomDay);
          if(Bq>=M){
              high=mid-1;
          }
          else{
              low=mid+1;
          }
      }
      return low;
    }