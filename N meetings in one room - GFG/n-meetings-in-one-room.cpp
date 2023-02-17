//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>> meeting_time;
       for( int i = 0 ; i < n ; i ++)
       {
           meeting_time.push_back({end[i],start[i]});
       }
       sort(meeting_time.begin(),meeting_time.end());
       int count = 1; 
       int prev = 0;
       for( int i = 0 ; i< n ; i ++)
       {
           int prev_end = meeting_time[prev].first;
           int curr_start = meeting_time[i].second;
           
           if(curr_start > prev_end)
           {
               count++;
               prev = i ;
           }
       }
       return count;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends