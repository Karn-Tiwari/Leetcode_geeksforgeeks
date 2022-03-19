// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    // CONCEPT- We should ensure that each opening bracket is balanced by each closing bracket
    bool ismatch(char a, char b)
    {
        return ((a == '('&& b==')')|| (a == '{'&& b == '}') || (a == '['&& b == ']'));// checking upcoming element into the stack and return back
    }
    bool ispar(string x)
    {
        // Your code here
        stack<int>s;// creating stack
        for(int i = 0; i<x.length(); i++)
    { if(s.empty()==false && ismatch(s.top(),x[i]))
    s.pop();
    else s.push(x[i]);
    }
    return 
    (s.empty()== true);// this is for No characater should be left in the stack
    return false;
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends