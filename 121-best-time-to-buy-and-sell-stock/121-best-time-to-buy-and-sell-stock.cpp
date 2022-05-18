class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int mincost = INT_MAX;
        int maxpro = 0;
        int n= prices.size();
        for(int i = 0; i<n;i++)
        {
            mincost = min(mincost,prices[i]);
            maxpro = max(maxpro,prices[i]-mincost);
        }
        return maxpro;
    }
};