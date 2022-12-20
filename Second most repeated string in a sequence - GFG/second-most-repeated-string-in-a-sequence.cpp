//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        unordered_map<string,int>map;
        vector<pair<int,string>>res;
        string str;
        for(int i =0; i<n; i++)
        {
            map[arr[i]]++;
        }
        
        for(auto x:map)
        {
            res.push_back(make_pair(x.second,x.first));
        }
        sort(res.begin(),res.end());
        
        str = res[res.size()-2].second;
        
        return str;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends