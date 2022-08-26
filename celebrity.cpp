  class Solution 
{
    public:
    
    bool know(vector<vector<int> >& m , int a, int b, int n ) {
        if(m[a][b]==1) {
            return true;
        }
        else{
            return false;
        }
    }
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int> s;
        
        for(int i =0;i<n;i++) {
            s.push(i);
        }
        
        //step2 
        while(s.size() > 1) {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            
            if(know(M ,a, b, n)) {
                s.push(b);
            }
            else{
                s.push(a);
            }
        }
        int cand = s.top();
        //step3 
        bool row = false;
        int count =0;
        
        for(int i=0;i<n;i++) {
            if(M[cand][i]==0) {
                count++;
            }
        }
        if(count ==n) {
            row = true;
        }
        
        bool col = false;
        
        int cc = 0;
        
        for(int i=0;i<n;i++) {
            if(M[i][cand]==1) {
                cc++;
            }
        }
        if(cc == n-1) {
            col = true;
        }
        
        if(row == true && col == true) {
            return cand;
        }
        else{
            return -1;
        }
        
        
    }
};
