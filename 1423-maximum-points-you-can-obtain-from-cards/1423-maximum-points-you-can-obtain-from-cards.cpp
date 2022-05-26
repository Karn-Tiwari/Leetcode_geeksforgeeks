class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
            int n(cardPoints.size()), window(0);
        
        for (int i = 0; i < n - k; ++i)
            window += cardPoints[i];
        
        int mid(window), total(window);
        
        for (int i = n - k; i < n; ++i) {
            window += cardPoints[i] - cardPoints[i - (n - k)];
            total += cardPoints[i];
            mid = min(mid, window);
        }
            
        return total - mid;
    }
};