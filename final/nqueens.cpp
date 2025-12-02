class Solution {
    public:
    
        void solveNqueens(int row,int n,vector<string>&v,vector<vector<string>>&ans){
            if(row==n){
                ans.push_back(v);
                return;
            }
    
            for(int col=0;col<n;col++){
                if(isSafe(row,col,n,v)){
                    v[row][col]='Q';
                    solveNqueens(row+1,n,v,ans);
                    v[row][col]='.';
                }
            }
        }
    
        bool isSafe(int row,int col,int n,vector<string>&v){
            //check column
            for(int j=0;j<row;j++){
                if(v[j][col]!='.'){
                    return false;
                }
            }
            //check diagonals
            //top left diagonal
            int i=row-1,j=col-1;
            while(i>=0 && j>=0){
                if(v[i][j]!='.')return false;
                i--;j--;
            }
            //top right diagonal
            i=row-1; j=col+1;
            while(i>=0 && j<n){
                if(v[i][j]!='.')return false;
                i--;j++;
            }
            return true;
        }
        vector<vector<string>> solveNQueens(int n) {
            vector<vector<string>>ans;
            vector<string>v;
            for(int i=0;i<n;i++){
                string s="";
                for(int j=0;j<n;j++){
                    s=s+".";
                }
                v.push_back(s);
            }
            solveNqueens(0,n,v,ans);
    return ans;
        }
    };