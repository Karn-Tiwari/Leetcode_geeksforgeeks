//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
            string res = "";
            int n = A.size();
            int m = B.size();
            unordered_map<char,int>map1,map2;
            for(int i =0; i<n; i++)
            {
                map1[A[i]]++;
            }
            for(int i =0; i<m; i++)
            {
                map2[B[i]]++;
                
            }
            for(int i =0; i<m; i++)
            {
                if(map1.find(B[i])==map1.end())
                {
                    res += B[i];
                }
            }
            for(int i =0; i<n;i++)
            {
                if(map2.find(A[i])==map2.end())
                {
                    res +=A[i];
                }
            }
            
            set<char>s;
            for(int i = 0; i<res.size(); i++)
            {
                s.insert(res[i]);
            }
            string ans ="";
            for(auto i:s)
                ans +=i;
                if(res.size()>0)
                return ans;
                else return "-1";
            
            
            
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends