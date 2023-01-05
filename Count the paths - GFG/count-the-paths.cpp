//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:

void dfs(unordered_map<int,vector<int>>&adj,int s,int d,int &paths)
{
    if(s==d)
    paths++;
    else{
        for(auto x: adj[s])
        {
            dfs(adj,x,d,paths);
        }
    }
}
	int possible_paths(vector<vector<int>>edges, int n, int s, int d){
	    // Code 
	  
	  unordered_map<int,vector<int>>adj;
	  
	  for(auto x:edges)
	  {
	      vector<int>temp = x;
	      int u = temp[0];
	      int v = temp[1];
	      
	      adj[u].push_back(v);
	  }
	  
	  int paths = 0;
	  dfs(adj,s,d,paths);
	  return paths;
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m, s, d;
		cin >> n >> m >> s >> d;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int u, v;
			cin >> u >> v;
			edges.push_back({u,v});
		}
		Solution obj;
		int ans = obj.possible_paths(edges, n, s, d);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends