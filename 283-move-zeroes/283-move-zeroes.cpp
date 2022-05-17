class Solution {
public:
    // This is two pointer technique in which whenever right pointer found 0 it will skip and when it found nonzero value the it will swap with left pointer and after that both increamented 
    void moveZeroes(vector<int>& nums) {
        int l = 0, r = 0;
        int temp;
        int n= nums.size();
        if(n==0||n==1)
        {
            return;
        }
        while(r<n)
        {
            if(nums[r]==0)
            {
                ++r;
            }
            else{
                temp = nums[l];
                nums[l] = nums[r];
                nums[r] = temp;
                ++l;
                ++r;
            }
        }
    }
};