/*
Submitted by: Sneha Jaiswal
GitHub link: https://github.com/Sneha-jais
Problem Statement:
Searching an element in a sorted array (Ternary Search):
Given a sorted array arr[] of size N and an integer K. The task is to check if K is present in
the array or not using ternary search. Return the position of desired element.
Expected Time Complexity: O(Log3N)
Expected Auxiliary Space: O(1)
Input: n=5
       arr[]={1,2,3,5,6}
       key=5
Output: 4
*/



#include<iostream> 
using namespace std;

int ternary_search(int arr[],int low,int high,int key){ 
int mid1,mid2;
if(low<=high){ 
  mid1=low+(high-low)/3; 
  mid2=high-(high-low)/3;
  
    if(key==arr[mid1]) 
      return mid1;
 
    else if(key==arr[mid2])
      return mid2;
    else if(key<arr[mid1])
       return ternary_search(arr,low,mid1-1,key);
    else if(key>arr[mid2])
       return ternary_search(arr,mid2+1,high,key); 
    else
        return ternary_search(arr,mid1+1,mid2-1,key);
}

return -1;
}

int main(){
int n,key;

cout<<"Enter number of elements:\n"; 
cin>>n;
int arr[n];
cout<<"Enter elements:\n"; 
for(int i=0;i<n;i++){ 
cin>>arr[i];
}

cout<<"Enter element you want to search:\n";
cin>>key;
int x=ternary_search(arr,0,n-1,key);
cout<<"Position of desired element is:"<<x+1<<endl;
return 0;

}
