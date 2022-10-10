//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string transform(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << transform(s) << endl;
    }
return 0;
}


// } Driver Code Ends


string transform(string S){
    //complete the function here
   int count = 1;
    string res  = "";
    for(int i = 0; i<S.length(); i++)
    {
        S[i] = tolower(S[i]);
        
    }
    for( int i =0; i<S.length(); i++)
    {
        if(S[i] == S[i+1])
        {
            count++;
           
            
        }
        else
        {
            res += to_string(count) + S[i];
            count = 1;
        }
        
    }
    return res;
}


