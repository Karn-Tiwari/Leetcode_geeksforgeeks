// { Driver Code Starts
// C++ implementation of For each element in 1st 
// array count elements less than or equal to it
// in 2nd array
#include <bits/stdc++.h>
 
using namespace std;


 // } Driver Code Ends
// function to count for each element in 1st array,
// elements less than or equal to it in 2nd array
class Solution{
  public:
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
    //Your code goes here
    // sort(arr2,arr2+n);
    // for(int i = 0; i<m; i++)
    // {
    //     int key = arr1[i];
    //     int count = helper(arr2,key,n);
    //     arr1[i] = count;
    // }
    // return arr1;
    // }
    // int helper(int arr2,int key,int n)
    // {
    //     int low = 0,high = n-1;
    //     while(low<=high){
    //         int mid = low + (high-low)/2;
    //         if(arr2[mid]<=key)
    //         {
    //             count+= mid-low+1;
    //             low =mid+1;
    //         }
    //         else{
    //             high =mid-1;
    //         }
    //         return count;
    //     }
      sort(arr2, arr2+n);
        
        vector<int> ans;
        
        for(int i = 0; i < m; i++){
            int cnt = 0;
            int low = 0, high = n-1;
            
            while(low <= high){
                int mid  = low + (high-low)/2;
                if(arr2[mid] <= arr1[i]){
                   cnt = max(cnt, mid+1);
                   low = mid+1;
                }else{
                    high = mid-1;
                }
            }
            
            ans.push_back(cnt);
        }
        
        return ans;}
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int arr1[m],arr2[n];
        for(int i=0;i<m;i++)
        cin>>arr1[i];
        for(int j=0;j<n;j++)
        cin>>arr2[j];
        Solution obj;
        vector <int> res = obj.countEleLessThanOrEqual(arr1, arr2, m, n);
        for (int i = 0; i < res.size (); i++) cout << res[i] << " ";
        
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends