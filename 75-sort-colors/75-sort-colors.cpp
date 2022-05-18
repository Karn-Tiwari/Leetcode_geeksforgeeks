class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int l = 0, m = 0, r = n-1;
int i;
        while(m<=r)
        { int check = nums[m];
            if(check == 0)
            {
                swap(nums[l],nums[m]);
                l++;
                m++;
            }
            else if(check==1)
            {
                m++;
            }
            else {
                swap(nums[m],nums[r]);
                r--;
            }
        }
    }
};