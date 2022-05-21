// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
public:
    string is_power_of_eight(long long int n ) 
    {
        // Code here.
                while(n%8 == 0)
            n /= 8;
        return n == 1 ? "Yes" : "No"; 
    }
};


// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int  n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_power_of_eight(n);
    	cout << ans << "\n";
    }
	return 0;
}
  // } Driver Code Ends