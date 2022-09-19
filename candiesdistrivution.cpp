class Solution {
  public:
    vector<long long> distributeCandies(int N, int K) {
        // code here
        vector<long long> ans(K);
        
        int candies = 1;
        int i=0;
        
        while(candies <= N) {
            if(i == K) {
                i = 0;
            }
            
            ans[i] +=candies;
            N -= candies;
            candies++;
            
            i++;
        }
        
        if(N > 0) {
            if(i == K) i = 0;
            
            ans[i] +=N;
        }
        
        return ans;
    }
