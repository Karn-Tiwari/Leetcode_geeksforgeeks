//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long squaresInMatrix(int m, int n) {
        // code here
        long long res = 0; 
        while(m!=0 && n!=0)
        {
            long long sum = m*n;
            m--;
            n--;
            
            res = res + sum;
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m,n;
        
        cin>>m>>n;

        Solution ob;
        cout << ob.squaresInMatrix(m,n) << endl;
    }
    return 0;
}
// } Driver Code Ends