vector < int > sortedArray(vector < int > a, vector < int > b) {
    int as=a.size();
    int bs=b.size();
    int i=0,j=0,k=-1;
    vector<int>ans;
    while(i<as&&j<bs){
        if(a[i]<b[j]){
            if(k>=0&&a[i]==ans[k]){  }
            else {
              ans.push_back(a[i]);
              k++;
            }
              i++;
        }
        else{
            if(k>=0&&b[j]==ans[k]){  }
            else {
              ans.push_back(b[j]);
              k++;
            }
            j++;
        }
    }
     while(i<as){
            if(k>=0&&a[i]==ans[k]){  }
            else {
              ans.push_back(a[i]);
              k++;
            }
              i++;
        }
     while(j<bs){
            if(k>=0&&b[j]==ans[k]){  }
            else {
              ans.push_back(b[j]);
              k++;
            }
              j++;
        }
        return ans;
}