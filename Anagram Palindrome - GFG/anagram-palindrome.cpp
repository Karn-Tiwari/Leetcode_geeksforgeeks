//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int isPossible (string s);

int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		if (isPossible (s))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int isPossible (string S)
{
    // your code here
    unordered_map<char,int>map;
    for(int i =0; i<S.size(); i++)
    {
        map[S[i]]++;
    }
    int count = 0;
    for(auto val:map)
    {
        if(val.second%2!=0)
        {
            count++;
            
        }
        
    }
    if(count>1)
    return 0;
    else return 1;
}