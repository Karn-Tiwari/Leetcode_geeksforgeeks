class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int j = 0;
        sort(nums.begin(),nums.end());
        int size = nums.size();
        for(j = 0; j<size-1; j++)
        {
            if(nums[j]==nums[j+1])
            {
                return true;
            }
        }
        return false;
    }
    
};