class Solution {
public:
    bool check(int i,int j,int k,int l,vector<vector<char>>& board){
        unordered_map<char,int>hash;
        for(int a=i;a<=k;a++){
            for(int b=j;b<=l;b++){
                char c=board[a][b];
                if(c>='1'&&c<='9' && hash[c]==0){
                    hash[c]++;
                    continue;
                } else if(c=='.') {
                    continue;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        int i,j,k,l;
        for(i=0,k=2;i<9;i+=3,k+=3){
            for(j=i,l=k;j<9;j+=3,l+=3){
                if(check(i,j,k,l,board)==false){
                    return false;
                }
                if(i!=j){
                    if(check(j,i,l,k,board)==false){
                        return false; 
                    }
                }
            }
        }
        for(int i=0;i<9;i++){
            if(check(0,i,8,i,board)==false){
                return false; 
            } 
            if(check(i,0,i,8,board)==false){
                return false; 
            } 
        }
        return true;
    }
};
