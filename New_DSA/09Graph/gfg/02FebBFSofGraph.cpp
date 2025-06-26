vector<int> bfsOfGraph(vector<vector<int>> &adj) {
        // Code here
        vector<int>ans;
        int n=adj.size();
        vector<bool>vis(n,0);
        vis[0]=1;
        queue<int>q;
        q.push(0);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto child:adj[node]){
                if(!vis[child]){
                    q.push(child);
                    vis[child]=1;
                }
            }
        }
        return ans;
    }