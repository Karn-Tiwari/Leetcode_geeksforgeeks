class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
         if(arr.size()==3)
            return 1;
        int l=0,h=arr.size()-1;
        while(l<h)
        {   
            int m=(l+h)/2;
            if(arr[m]>arr[m-1]&&arr[m]>arr[m+1])
                return m;
            else if(arr[m]<arr[m+1])
                l=m+1;
            else 
                h=m;
        }
        return 1;
    }
};