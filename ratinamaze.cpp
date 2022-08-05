class Solution{
    private:
    bool issafe(vector<vector<int>> m , int n, vector<vector<int> > vis ,int x , int y) {
        if(m[x][y]==1 && vis[x][y] ==0 && (x>=0 && x <=n-1) && (y>=0 && y<=n-1)){
            return true;
        }
        
       else{ return false; }
    }
    void solve(vector<string> &ans, vector<vector<int>>  vis ,string path , vector<vector<int>> &m , int n , int x , int y) {
        //base
        if(x== n-1 && y== n-1 ) {
            ans.push_back(path);
            return;
        }
        
        vis[x][y] ==1;
        
        //down 
        int newx = x+1;
        int newy = y;
        if(issafe(m , n , vis, newx , newy)) {
            path.push_back('D');
            solve(ans , vis , path , m , n , newx , newy);
            path.pop_back();
        }
        
        //up 
        newx = x-1;
        newy = y;
        if(issafe(m , n , vis, newx , newy)) {
            path.push_back('U');
            solve(ans , vis , path , m , n , newx , newy);
            path.pop_back();
        }
        
        //left 
        newx = x;
        newy = y-1;
        if(issafe(m , n , vis, newx , newy)) {
            path.push_back('L');
            solve(ans , vis , path , m , n , newx , newy);
            path.pop_back();
        }
        
        //right
        newx = x;
        newy = y+1;
        if(issafe(m , n , vis, newx , newy)) {
            path.push_back('R');
            solve(ans , vis , path , m , n , newx , newy);
            path.pop_back();
        }
        
        vis[x][y] ==0;
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        
        vector<string> ans ;
        if(m[0][0] == 0 ) {
            return ans;
        }
        int srcx =0 ;
        int srcy =0; 
        
        vector<vector<int> > vis  = m;
        
        for(int i =0;i<n;i++) {
            for(int j =0;j<n;j++) {
                vis[i][j] ==0;
                
            }
        }
        
       string path = "";
        
        solve(ans , vis , path , m , n , srcx , srcy );
        sort(ans.begin() , ans.end());
        
        return ans;
    }
};

