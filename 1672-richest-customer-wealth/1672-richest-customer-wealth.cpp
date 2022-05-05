class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int row_money = accounts.size();
        int col_money = accounts[0].size();
        int max_money = 0;
        for(int i = 0; i<row_money; i++)
        {
            int sum = 0; 
            
                for(int j = 0; j<col_money; j++)
                {
                    sum = sum + accounts[i][j];
                    
                }
                max_money = max(max_money,sum);
            
        }
        return max_money;
    }
};