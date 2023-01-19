//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int carpetBox(int A, int B, int C, int D){
        //code here
        int len_move = 0,len2_move = 0;
        int A1 = A;
        int B1 = B;
        while(A>C)
        {
            A = A/2;
            len_move++;
        }
        while(B>D)
        {
            B = B/2;
            len_move++;
        }
        A = B1;
        B = A1;
        while(A>C)
        {
            A= A/2;
            len2_move++;
        }
        while(B>D)
        {
            B = B/2;
            len2_move++;
        }
        return min(len_move,len2_move);
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        
        Solution ob;

        int ans = ob.carpetBox(A,B,C,D);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends