bool dfs(int i,vector<vector<int>>&adj,vector<bool>&vis,vector<bool>&pathVis){
        vis[i]=1;
        pathVis[i]=1;
        for(auto child:adj[i]){
            if(!vis[child]){
                if(dfs(child,adj,vis,pathVis))return true;
            }
            else if(pathVis[child]){
                return true;
            }
        }
        pathVis[i]=0;
        return false;
    
    }
    bool isCyclic(int V, vector<vector<int>> adj) {
        // code here
        vector<bool>vis(V,0);
        vector<bool>pathVis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(dfs(i,adj,vis,pathVis))return true;
            }
        }
        return false;
        
    }