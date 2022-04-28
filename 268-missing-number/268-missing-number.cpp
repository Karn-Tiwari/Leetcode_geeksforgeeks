class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long int x = 0;
        int size = nums.size();
        long long int y = (size*(size+1))/2;
        for(int i = 0; i<size; i++)
        {
            x = x+nums[i];
        }
        return y-x;
    }
};