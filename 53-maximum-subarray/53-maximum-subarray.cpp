class Solution {
public:
    int maxSubArray(vector<int>& nums) {
          int global_Max_Sum = nums[0], curr_Max_Sum = nums[0];
        for (int ind = 1; ind < nums.size(); ind++) {
            curr_Max_Sum = max(curr_Max_Sum + nums[ind], nums[ind]);
            global_Max_Sum = max(global_Max_Sum, curr_Max_Sum);
        }
        return global_Max_Sum;
    }
};