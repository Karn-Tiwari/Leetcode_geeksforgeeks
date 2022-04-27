// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int>v;
    
    for(int i = 0; i<n;i++)
    {
        if(x==arr[i])
        {
            v.push_back(i);
            break;
        }
    }
    for(int j=n; j>=0; j--)
    {
        if(x==arr[j])
      {  v.push_back(j);
        break;
    }
        
    }
    if(v.empty())
    {
        v.push_back(-1);
        v.push_back(-1);
    }
    return v;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends