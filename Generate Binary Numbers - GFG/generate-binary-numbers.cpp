//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int N)
{
	// Your code here
	queue<string>q;
	vector<string>res;
	q.push("1");// starting me pehla number 1 hi hai usko push karenge
	for(int i =1; i<=N; i++)
	{
	    string temp = q.front();// temp me queue k front element ko store kar dena hai
	    res.push_back(temp);// phir us temp ko res me store kar dena hai
	    q.pop();// uske baad front element ko pop kar dena hai
	    q.push(temp+"0");// uske baad uss temp me 0 and 1 add kar denge next binary numbe banane k liye
	    q.push(temp+"1");
	    
	}
	return res;
	
}


//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}
// } Driver Code Ends