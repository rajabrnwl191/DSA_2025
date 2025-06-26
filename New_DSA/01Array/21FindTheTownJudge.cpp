int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>t(n+1,0),td(n+1,0);
        for(int i=0;i<trust.size();i++){
            vector<int>x=trust[i];
            t[x[0]]=1;
            td[x[1]]+=1;
        }
        for(int i=1;i<=n;i++){
            if(t[i]==0&&td[i]==n-1)return i;
        }
        return -1;

    }