// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  
      
     
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
       vector<int>res= {-1,-1};
         int low = 0,high = n-1;
      
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(arr[mid]==x)
            {
                res[0] = mid;
                high = mid-1;
            }
            else if(arr[mid]>x)
            {
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
   
         low = 0,high =n-1;
     
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(arr[mid]==x)
            {
                res[1] = mid;
                low  = mid+1;
            }
            else if(arr[mid]>x)
            {
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
       if(res[0]==-1)
       return{-1};
       else
       return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}
  // } Driver Code Ends