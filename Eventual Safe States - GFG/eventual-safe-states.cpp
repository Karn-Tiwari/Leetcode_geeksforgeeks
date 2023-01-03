//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    
        // code here
         bool dfs(int s, vector<bool>&vis, vector<bool>&recSt,vector<int> adj[],vector<bool>&present_cycle)
    {
        //Sab kuch Detect cycle in directed graph ki tarah hai 
        // Bass ek present_cycle ka vector banayenge agar cycle hai aur usme jo jo node hai unko hata k wo sare node ko vector me store kar denge jo kisi bhi cycle me present nhi hai wahi hamara answer hoga
        vis[s] = true;
        recSt[s] = true;
        vector<int>data = adj[s];
        for(auto x: data)
        {
            if(!vis[x])
             { if(dfs(x,vis,recSt,adj,present_cycle))
               {
                   return present_cycle[s] = true;
               }
             }
             else if(vis[s]&& recSt[x])
             {
                 return present_cycle[s] = true;
             }
        }
        recSt[s] = false;
        return false;
    }
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        vector<int>res;
        vector<bool>vis(V,false);
        vector<bool>recSt(V,false);
        vector<bool>present_cycle(V,false);
        
        for(int i = 0; i<V; i++)
        {
            if(!vis[i])
            {
                dfs(i,vis,recSt,adj,present_cycle);
            }
        }

        for(int i = 0; i<V; i++)
        {
            if(!present_cycle[i])
            res.push_back(i);
        }
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends