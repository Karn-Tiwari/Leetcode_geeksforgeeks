//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 
  

// } Driver Code Ends
class Solution{
    public:
    int maximizeSum(int a[], int n) 
    {
        // Complete the function
          int res = 0;

        multiset<int> ms(a, a+n);

        while(!ms.empty()){

            auto it = ms.end();

            it--;

            res+=*it;

            auto it2 = ms.find(*it - 1);

            ms.erase(it);

            if(it2!=ms.end()) {

                ms.erase(it2);

            }

        }

        return res;
    }

};


//{ Driver Code Starts.



int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr, arr+n);
        Solution ob;
        
        cout << ob.maximizeSum(arr, n) << endl;
        
        
    }

}


// } Driver Code Ends