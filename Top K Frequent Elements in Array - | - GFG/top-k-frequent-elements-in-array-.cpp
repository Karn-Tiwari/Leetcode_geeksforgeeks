// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        vector<int>res;
        map<int,int>map;
        for(auto x:nums)
        {
            map[x]++;
            
        }
        // sabse pehle element ko map me dalo aur map me first hota hai freq and second hota hai value
        // phir priority queue me dalagaye sabse pehle val ka second matlab map k har elemnt ki val aur baar me dalagaya first kul mila k position palat di gai jisse ki abar me prioritu queue k top kka second value na ki frequeny ho
        priority_queue<pair<int,int>>pq;
        for(auto val:map)
        {
            pq.push({val.second,val.first});
        }
        while(k--)
        {
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
        
    }
};


// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends