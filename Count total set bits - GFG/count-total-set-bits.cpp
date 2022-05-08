// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.

    // LOOK UP TABLE METHOD
    // int table[256];
    // void initialize()
    // {
    //     table[0] = 0;
    //     for(int i = 1; i<256; i++)
    //     {
    //         table[i] = (i&1) + table[i/2];
            
    //     }
    // }
    int countSetBits(int n)
    {
    
        // int res = table[n&0xff];
        // n = n>>8;
        // res = table[n&0xff];
        // n = n>>8;
        // res = table[n&0xff];
        // n = n>>8;
        // res = table[n&0xff];
        // n = n>>8;
        // return res;
            // Brian Kerningm's method
       if(n==0)return 0;
        int x = log2(n);
        int ans = (1<<(x-1))*x;
        ans += n-(1<<x)+1;
        ans += countSetBits(n-(1<<x));
        return ans;
    }
};


// { Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}
  // } Driver Code Ends