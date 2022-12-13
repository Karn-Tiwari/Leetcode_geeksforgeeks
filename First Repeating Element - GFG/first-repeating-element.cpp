// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        // key value iska matlab konsi key kitni baar aii hai 
        
        // 1  1
        // 5  2
        // 3  2
        // 4  1
        // 6  1
        
        unordered_map<int,int>map;
        for(int i =0; i<n; i++)
        {
            map[arr[i]]++;
        }
        for(int i=0; i<n; i++)
        {
            int key = arr[i];
            // arr k element ko key me store karte jayenge aur search karenge hashtable me ki present hai ki nhi 
            // agar present hai to uski value ko store kar denge val variable me aur jab val 1 se badi ho jaye to return kar denge uski index
            auto temp = map.find(key);
            int val = temp->second;
            if(val>1)
            {
                return i+1;// +1 iseliye kuki 1 based indexing maang rha hai
            }
        }
        return -1;
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}
  // } Driver Code Ends