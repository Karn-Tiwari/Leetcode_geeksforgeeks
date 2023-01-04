//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
        vector<pair<int,int>>adj[N];
        for(int i =0; i<M; i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
            
            adj[u].push_back({v,w});
        }
        
        vector<int>dis(N,INT_MAX);
        queue<int>q;
        int src = 0;
        q.push(src);
        dis[src] = 0;
        
        while(q.empty()==false)
        {
            int node = q.front();
            q.pop();
            
            for(auto it :adj[node])
            {
                int u = it.first;
                int v = it.second;
                if(dis[node] + v < dis[u] )
                dis[u] = dis[node] + v;
                q.push(u);
            }
        }
        
        for(int i =0; i<dis.size(); i++)
        {
            if(dis[i]==INT_MAX)
            dis[i] = -1;
        }
        return dis;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends