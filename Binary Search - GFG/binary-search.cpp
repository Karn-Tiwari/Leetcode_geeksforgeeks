// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int small = 0; int large = n;
        while(small<=large)
        {
            int middle = (small + large)/2;
            if(arr[middle]==k)
            return middle;
            else if(arr[middle]>k)
            large = middle-1;
            else
            small = middle+1;
        }
        return -1;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}
  // } Driver Code Ends