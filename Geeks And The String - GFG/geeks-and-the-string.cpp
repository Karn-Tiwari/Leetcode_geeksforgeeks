//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string removePair(string s) {
        // code here
           stack<char>st;
        string ans;
        for(int i=0;i<s.length();i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
           else if(s[i]==st.top() )
            {
                st.pop();
            }
            else
            {
               st.push(s[i]);   
            }
        }
        if(!st.empty()){
        while(!st.empty())
        {
           ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        }
        return "-1";
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s; 
        cin>>s;
        
        Solution obj;
        string res = obj.removePair(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends