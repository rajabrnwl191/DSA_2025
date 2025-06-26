void dfs(int i,vector<vector<int>>&adj,vector<int>&vis,vector<int>&ans){
        vis[i]=1;
        ans.push_back(i);
        for(auto child:adj[i]){
            if(!vis[child]){
                dfs(child,adj,vis,ans);
            }
        }
        return ;
    }
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        // Code here
        int n=adj.size();
        vector<int>vis(n,0);
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(!vis[i]){
                dfs(i,adj,vis,ans);
            }
        }   
        return ans;
    }