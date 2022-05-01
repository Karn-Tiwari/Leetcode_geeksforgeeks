class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>v;
        int n  = encoded.size();
        v.push_back(first);
        for(int i = 0; i<n; i++)
        {
            encoded[i] = v[i]^encoded[i];
            v.push_back(encoded[i]);
        }
        return v;
    }
};