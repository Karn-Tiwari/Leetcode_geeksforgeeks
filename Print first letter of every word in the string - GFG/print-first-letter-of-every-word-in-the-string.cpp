// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	string firstAlphabet(string S)
	{
	    // Your code goes here
	       string s = "";
	        stringstream str(S);
	        string word;
	        while(str>>word)
	        {
	            s = s + word[0];
	        }
	        return s;
	}

// 	string s1 = "";
// 	    s1 = s1+S.charAt(0);
// 	for(int i = 0; i<s1.length(); i++)
// 	{
// 	    if(S.charAt(i) == '')
// 	    {
// 	        s1 = S.charAt(i+1);
// 	    }
// 	}
// 	return s1
// 	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	
        Solution ob;
   		cout << ob.firstAlphabet(s) << "\n";
   	}

    return 0;
} 
  // } Driver Code Ends