// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    int matchGame(long long N) {
        // code 
     if(N%5==0)// if number matchstick are multiple of 5 then always A loses BuT if number of matchssticks are 6 then A win
     
       return -1;
       else
       return N%5;
   
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.matchGame(N) << endl;
    }
    return 0;
}  // } Driver Code Ends