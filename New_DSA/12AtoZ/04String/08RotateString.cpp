 bool rotateString(string s, string goal) {
    int n=s.size(),m=goal.size();
    if(n!=m)return false;
    string ds=s+s;
    return ds.find(goal)!=string::npos;

}


bool rotateString(string s, string goal) {
    int n=s.size(),m=goal.size();
    if(n!=m)return false;
    if(s==goal)return true;
    string tmp=s;
    for(int i=0;i<n;i++){
        tmp=tmp.substr(1,n)+s[i];
        if(tmp==goal)return true;            
    }
    return false;

}