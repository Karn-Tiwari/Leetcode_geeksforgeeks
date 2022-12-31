//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    
    bool isValid(vector<vector<int>>& image, int sr, int sc,int m, int n, int oldColor)
    {
        if(sr>=0 && sr<m && sc>=0 && sc<n && image[sr][sc]==oldColor)
        {
            return true;
        }
    }
    void dfs(vector<vector<int>>& image, int sr, int sc,int m, int n, int oldColor, int newColor)
    {
        image[sr][sc] = newColor;
        if(isValid(image,sr+1,sc,m,n,oldColor))
        {
            dfs(image,sr+1,sc,m,n,oldColor,newColor);
        }
         if(isValid(image,sr-1,sc,m,n,oldColor))
        {
            dfs(image,sr-1,sc,m,n,oldColor,newColor);
        }
         if(isValid(image,sr,sc+1,m,n,oldColor))
        {
            dfs(image,sr,sc+1,m,n,oldColor,newColor);
        }
         if(isValid(image,sr,sc-1,m,n,oldColor))
        {
            dfs(image,sr,sc-1,m,n,oldColor,newColor);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // Code here 
        int m = image.size();
        int n = image[0].size();
        int oldColor = image[sr][sc];
        
        if(oldColor == newColor)
        return image;
        dfs(image,sr,sc,m,n,oldColor,newColor);
        
        return image;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends