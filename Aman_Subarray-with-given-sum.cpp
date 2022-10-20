#include <bits/stdc++.h>
using namespace std;




class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {
        // Your code here
        int j =0 ,sum=0;
        vector<int> ans;
        for (int i =0 ;i < n ;i++)
        {
            sum+=arr[i];
            
            while (sum>s)
            {
                sum-=arr[j++];
            }
            
            if (sum==s)
            {
                ans.push_back(j+1);
                ans.push_back(i+1);
                return ans;
            }
        }
        
        ans.clear();
        ans.push_back(-1);
        return ans;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
