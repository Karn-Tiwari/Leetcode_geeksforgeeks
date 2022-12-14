//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    //
   string str = "";
   unordered_map<char,int>map;
   for(auto val:s)
   {
       map[val]++;
       if(map[val]>1)
       {
           str = str + val;
           return str;
       }
       
   }
   
   return "-1";
    

}