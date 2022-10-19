#include<iostream>
#include<cmath>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int linear_search(int array[],int size, int key)
{
for (int i = 0; i <size; i++)
{
    if (array[i]==key)
    {
        return i+1;
    }
   
}
 return -1;
}
int main()
{
int n;
int key_main;

cout<<"Enter the size of the array"<<endl;
cin>>n;
int array[n];

for (int i = 0; i < n; i++)
{
    cin>>array[i];

}
cout<<"Enter the number you want position of"<<endl;
cin>>key_main;

cout<<"Your no is at "<<linear_search(array,n,key_main)<<" position";
return 0;
}
