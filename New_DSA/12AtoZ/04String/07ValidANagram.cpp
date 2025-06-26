bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        vector<int>cnt1(256,0);
        for(int i=0;i<s.size();i++){
            int x=s[i];
            cnt1[x]++;
            int y=t[i];
            cnt1[y]--;
        }
        for(auto a:cnt1){
            if(a!=0)return false;
        }
        return true;
    }