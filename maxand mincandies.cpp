class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        sort(candies, candies + N);
        int buy =0;
        int mini =0;
        int Free = N-1;
        
        while(buy<=Free) {
            mini = mini + candies[buy];
            buy++;
            
            Free -= K;
        }
        
        buy = N-1;
        Free = 0;
        int maxi =0;
        
        while(Free <= buy ) {
            maxi = maxi + candies[buy];
            buy--;
            
            Free +=K;
        }
        
        vector<int> ans;
        ans.push_back(mini);
        ans.push_back(maxi);
        
        return ans;
    }
};
