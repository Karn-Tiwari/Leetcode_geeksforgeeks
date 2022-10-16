// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxLength(string S){
        // code here
        stack<int>st;
        int count = 0; 
        st.push(-1);
        for(int i = 0; i<S.size(); i++)
        {
            
            if(S[i]=='(')
            {
                st.push(i);
            }
            else if (S[i]==')')
            {
                st.pop();
                if(st.empty())
                {
                    st.push(i);
                }
                else{
                    count = max(count,i-st.top());
                }
            }
            
        }
        return count;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.maxLength(S)<<"\n";
    }
    return 0;
}  // } Driver Code Ends