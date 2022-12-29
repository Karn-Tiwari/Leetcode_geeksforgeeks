//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> asteroidCollision(int N, vector<int> &asteroids) {
        // code here
        stack<int>st;
        for(int val : asteroids)
        {
            if(st.empty())
            {
                st.push(val);
            }
            else{
                if(val>0)
                {
                    st.push(val);
                }
                else{
                    while(st.empty()==false && st.top()>0 && st.top()<abs(val))
                    {
                        st.pop();
                    }
                    if(st.empty()==false && st.top()==abs(val))
                    {
                        st.pop();
                        continue;
                    }
                    if(st.empty()==false && st.top()>abs(val))
                    {
                        continue;
                    }
                    st.push(val);
                }
            }
        }
        vector<int>res;
        while(st.empty()==false)
        {
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> asteroids(N);
        for (int i = 0; i < N; i++) cin >> asteroids[i];

        Solution obj;
        vector<int> ans = obj.asteroidCollision(N, asteroids);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends