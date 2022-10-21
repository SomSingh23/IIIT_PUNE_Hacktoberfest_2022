#include <bits/stdc++.h>
using namespace std;
  
/* Returns the product of max product subarray.*/
int maxSubarrayProduct(int arr[], int n)
{
    // Initializing result
    int result = arr[0];
  
    for (int i = 0; i < n; i++) 
    {
        int mul = arr[i];
        // traversing in current subarray
        for (int j = i + 1; j < n; j++) 
        {
            // updating result every time
            // to keep an eye over the maximum product
            result = max(result, mul);
            mul *= arr[j];
        }
        // updating the result for (n-1)th index.
        result = max(result, mul);
    }
    return result;
}
  
// Driver code
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    cout << "Maximum Sub array product is "
         << maxSubarrayProduct(arr, n);
    return 0;
}
