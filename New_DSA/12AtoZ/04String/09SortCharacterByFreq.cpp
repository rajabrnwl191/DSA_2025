string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            ++mp[s[i]];
        }
        vector<pair<char,int>>v(mp.begin(),mp.end());
        sort(v.begin(),v.end(),[](pair<char,int>a,pair<char,int>b){
            return a.second>b.second;
        });
        string ans="";
        for(auto d:v){
            ans+=string(d.second,d.first);
        }
        return ans;
    }

    //better 
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            ++mp[s[i]];
        }
        priority_queue<pair<int,char>>pq;
        for(auto f:mp){
            pq.push({f.second,f.first});
        }
        string ans="";
        while(!pq.empty()){
            pair<int,char>p=pq.top();
            pq.pop();
            ans+=string(p.first,p.second);
        }
        return ans;
    }