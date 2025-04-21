bool isValidSudoku(vector<vector<char>>& board) {
  int m=9;
 int n=9;
 //colmn
 for(int i=0;i<m;i++){
     unordered_set<char>s;
     for(int j=0;j<n;j++){
         if(board[i][j]=='.')continue;
         if(s.find(board[i][j])!=s.end())return false;
         s.insert(board[i][j]);
     }
 }
 //rows
 for(int j=0;j<n;j++){
     unordered_set<char>s;
     for(int i=0;i<m;i++){
         if(board[i][j]=='.')continue;
         if(s.find(board[i][j])!=s.end())return false;
         s.insert(board[i][j]);
     }
 }
 //3X3 box
 for(int r = 0; r < m; r += 3){
 for(int c = 0; c < n; c += 3){
     unordered_set<char> s;
     for(int i = r; i < r + 3; i++){
         for(int j = c; j < c + 3; j++){
             if(board[i][j] == '.') continue;
             if(s.find(board[i][j]) != s.end()) return false;
             s.insert(board[i][j]);
         }
     }
 }
}

 return true;
}