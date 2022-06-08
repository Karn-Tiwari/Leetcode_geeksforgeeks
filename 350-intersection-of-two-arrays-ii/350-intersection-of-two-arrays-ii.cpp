class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
         vector<int> ans;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int j=0;
        for(int i=0;i<nums1.size();i++){
            int l=j, r=nums2.size()-1, m;
            while(l<=r){
                m=l+(r-l)/2;
                if(nums2[m]>=nums1[i]){
                    r=m-1;
                }
                else{
                    l=m+1;
                }
            }
            if(l<=nums2.size()-1 && nums2[l]==nums1[i]){
                ans.push_back(nums1[i]);
                j=l+1;
            }
        }
        return ans;
    }
};