class Solution {
public:
    int findLHS(vector<int>& nums) {
        
    int l = 0;
    int r = 0;
    int max = INT_MIN;
    int count = 0;
        
    if (nums.size() == 0 || nums.size() == 1)
        return 0;
        
    sort(nums.begin(), nums.end());
        
    for (int i = 1; i < nums.size(); i++)
    {     

        if (nums[i] - nums[i - 1] == 1)
        {
            count = 0;
            l = i - 1;
            r = i;
           
            while (nums[l] == nums[i - 1])
            {    
                count++;
                l--;
                if (l == -1)
                    break;
            }
            
            while (nums[r] == nums[i])
            {
                count++;
                r++;
                if (r == nums.size())
                    break;
            }  
        }
        
        if (count > max)
            max = count;
    }
        
    return max;
        
    }
};
