class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int>index;
        int size = nums.size();
        for(int i = 0; i<size;i++)
        {
            int diff = target-nums[i];
            for(int j = i+1; j<size; j++)
            {
                if(nums[j]==diff)
                {index.push_back(i);
                index.push_back(j);
                break;}
             }
            
         }
        return index;
    }
};