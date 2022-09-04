class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
       
        for(int i=0;i<n;i++) {
            int c = nums[i] -1;
            
            if(nums[i] != nums[c]) {
                swap(nums[i], nums[c]);
            }
            
        }
        
        return nums;
           
    }
};
