//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int removeStudents(int H[], int N) {
        // code here
        vector<int>res;
        res.push_back(H[0]);
        for(int i =0; i<N; i++)
        {
            if(H[i]>res.back())
            res.push_back(H[i]);
            else {
                int ind = lower_bound(res.begin(),res.end(),H[i])-res.begin();
                res[ind] = H[i];
                
            }
        }
        return N- res.size();
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int H[N];
        for(int i=0; i<N; i++)
            cin>>H[i];

        Solution ob;
        cout << ob.removeStudents(H,N) << endl;
    }
    return 0;
}
// } Driver Code Ends