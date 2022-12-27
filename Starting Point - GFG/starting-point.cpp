//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
	vector<int> findStartingPoint(int x, int y, vector<vector<int>>pathCoordinates){
	    // Code here
	    int p = 0;
	    int q = 0;
	    int n = pathCoordinates.size();
	    vector<int>res;
	    for(int i = 0; i<n; i++)
	    {
	        p  = p + pathCoordinates[i][0];
	         q = q + pathCoordinates[i][1];
	 
	    }
	         res.push_back(x-p);
	         res.push_back(y-q);
	    
	    return res;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int x, y;
		cin >> x >> y;
		int n;
		cin >> n;
		vector<vector<int>>pathCoordinates;
		for(int i = 0; i < n; i++){
			int a, b;
			cin >> a >> b;
			pathCoordinates.push_back({a,b});
		}
		Solution obj;
		vector<int> ans = obj.findStartingPoint(x, y, pathCoordinates);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends