//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int nthFibonacci(long long int n){
        // code here
        vector<long long int >dp(n+1,0);
        for(int i = 0; i<n+1; i++){
            if(i==0||i==1)
            dp[i] = i;
            else
            dp[i] = dp[i-1]%1000000007 + dp[i-2]%1000000007;
        }
        return dp[n]%1000000007;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends