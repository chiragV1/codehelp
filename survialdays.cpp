class Solution{
public:
    int minimumDays(int S, int N, int M){
        // code here
        if(N < M) {
            return -1;
        }
        
        int sunday = S/7;
        int buyday = S-sunday;
        
        int total = S*M;
        int ans=0;
        if(total % N ==0) {
            ans = total/N;
        }
        else{
            ans = total/N +1;
        }
        
        if(ans <=buyday) {
            return ans;
        }
        else{
            return -1;
        }
    }
};
