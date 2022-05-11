// { Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
      {
    
    int sum=0;string s="";
    for(int i=0;i<str.size();i++){
        int p=i;// storing into another variable just because of traversing again to finding tens digit
        if(str[p]>='0'&&str[p]<='9'){
            s=str[p];// storing number as a string 
        while(str[p+1]>='0'&&str[p+1]<='9'){
            s=s+str[p+1];//stroring tens digit number as string
            p++;
        }
        int q=stoi(s);// extracting number from a string
        sum=sum+q;
        }
        i=p;
    }
    return sum;//returning sum
    
    
   }
};

// { Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends