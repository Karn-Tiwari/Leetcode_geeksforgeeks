//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
        //code here.
        int l =0; int r = 0;// left and right counter ko shuru me zero postion pe le lenge
        
        while(l<s.size())// left counter jab tak string se chota ho
        {
            while(r<s.size()&& s[r]!='.')//right counter string se chota ho aur jab tak string k right counter 
            {
                r++;
            }
            reverse(s.begin() + l, s.begin() + r);
         l = r+1;
         r = l;
         
        }
        return s;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends