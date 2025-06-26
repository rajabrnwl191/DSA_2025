int snakesAndLadders(vector<vector<int>>& board) {
        int steps=0,n=board.size(),lg=n*n;
        queue<int>que;
        que.push(1);
        vector<vector<int>>visited(n,vector<int>(n,0));
        visited[n-1][0]=1;
        while(!que.empty()){
            int s=que.size();
            while(s--){
                int box=que.front();
                que.pop();
                if(box==lg)return steps;
                for(int k=1;k<=6;k++){
                    int i=box+k;
                    if(i>lg)break;
                    //calculate coordinate
                    int row=(n-1)-(i-1)/n,col=(i-1)%n;
                    if(n%2==0&&row%2==0||n%2==1&&row%2==1)col=(n-1)-col;
                    
                    if(visited[row][col]==0){
                        if(board[row][col]!=-1)
                            que.push(board[row][col]);
                        else
                        que.push(i);
                    visited[row][col]=1;
                    }
                }
            }
               steps++;
        }
    return -1;
    }