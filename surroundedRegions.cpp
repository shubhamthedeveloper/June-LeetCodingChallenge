class Solution {
public:
        
    void DFS(vector<vector<char>>& board,int i,int j,int rows, int cols){
        if(i<0 || i>=rows || j<0 || j>=cols || board[i][j] == 'X' || board[i][j] == 'D')
            return;
        if(board[i][j] == 'O')
           board[i][j] = 'D';
        
        DFS(board,i-1,j,rows,cols);
        DFS(board,i+1,j,rows,cols);
        DFS(board,i,j-1,rows,cols);
        DFS(board,i,j+1,rows,cols);
        
    }
    
    void solve(vector<vector<char>>& board) {
        if(!board.size())return;
        
        int rows = board.size();
        int cols = rows==0?0:board[0].size();
        
        for(int i=0;i<rows;i++){
            DFS(board,i,0,rows,cols);
            if(cols>1) DFS(board,i,cols-1,rows,cols);
        }
        for(int i=1;i<cols-1;i++){
            DFS(board,0,i,rows,cols);
            if(rows>1) DFS(board,rows-1,i,rows,cols);
        }
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(board[i][j] == 'O')
                    board[i][j] = 'X';
                else if(board[i][j] == 'D')
                    board[i][j] = 'O';
            }
        }
    }   
};