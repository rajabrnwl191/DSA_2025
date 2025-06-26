bool dfs(vector<vector<int>>& adj,int i,int p,vector<bool>vis){
        vis[i]=true;
        for(auto j:adj[i]){
            if(!vis[j])
            {    if(dfs(adj,j,i,vis))
                return true;
            }
            else if(j!=p){
                return true;
            }
        }
        return false;
        
    }
    bool isCycle(vector<vector<int>>& adj) {
        // Code here
        int n=adj.size();
        vector<bool>vis(n,false);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(dfs(adj,i,-1,vis))return true;
            }
        }
        return false;
    }