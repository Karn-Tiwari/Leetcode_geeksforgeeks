//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {
        // code here
    //     int open = 0, close = 0;
    //     int valid =0;
    //     for(int i =0; i<s.size(); i++)// starting se traverse karenge agar ( open bracket ata hai to open++ nhi to close++ 
    //     {
    //         if(s[i]=='(')
    //       { open++;}
    //         else
    //   {     close++;}
    //         if(open==close)// agar open aur close same ho jate hai to len me dono ka sum daal denge aur phir usme se max le lenge
    //       { int len = open +close;
    //         valid = max(valid,len);}
    //         else if(open<close)
    //         {
    //             open = close = 0;
    //         }
    //     }
        
    //     open = close =0;
    //     for(int i = s.size()-1; i>=0; i--)
    //     {
    //          if(s[i]=='(')
    //         open++;
    //         else
    //         close++;
    //         if(open==close)
    //       { int len = open +close;
    //         valid = max(valid,len);}
    //         else if(open>close)
    //         {
    //             open = close = 0;
    //         }
            
    //     }
    //     return valid;
     stack<int>st;
     int val_max = 0;
     st.push(-1);
     for(int i = 0; i<s.size(); i++)
     {
         if(s[i]== '(')
{         st.push(i);}
     
     else
     {
         st.pop();
         if(st.empty())
{         st.push(i);}
         else{
             
             int len = i-st.top();
             val_max = max(val_max,len);
         }
     }
     }
     return val_max;
     
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}

// } Driver Code Ends