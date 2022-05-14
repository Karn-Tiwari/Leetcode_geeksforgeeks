// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
// This is the solution of changing number system same just like we change Decimal to binary same concept is here

class Solution{
	public:
    	long long findNth(long long N)
    {
        // code here.
        // we changing base 10 base 9
        // N is nothing but base10num
        long long base9num = 0;
        long long pos =1;
        while(N>0)
    {// taking reminder with 9
        base9num += pos*(N%9);
        // divide number by 9
        N /=9;
        // multiply 10 with position
        pos = pos*10;
    }
    return base9num;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n , ans;
		cin>>n;
		Solution obj;
		ans = obj.findNth(n);
		cout<<ans<<endl;
	}
}

  // } Driver Code Ends