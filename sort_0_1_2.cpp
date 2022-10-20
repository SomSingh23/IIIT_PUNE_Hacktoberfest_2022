// Given an array of size N containing only 0s, 1s and 2s, our task is to sort them

#include <iostream>
#include <algorithm>
using namespace std;

void sort012(int *arr, int n)
{
    int count_0=0, count_1=0, count_2=0;
    for(int i=0;i<n;i++)
    {
        // Storing the count of 0s, 1s and 2s
        if(arr[i]==0)
        {
            count_0++;
        }
        else if(arr[i]==1)
        {
            count_1++;
        }
        else if(arr[i]==2)
        {
            count_2++;
        }
    }
    int k=0;
    // Putting the 0s, 1s and 2s 
    for(int i=0;i<count_0;i++)
    {
        arr[k]=0;
        k++;
    }
    for(int i=0;i<count_1;i++)
    {
        arr[k]=1;
        k++;
    }
    for(int i=0;i<count_2;i++)
    {
        arr[k]=2;
        k++;
    }
}

int main()
{
	int t;
    cout<<"Enter the number of test cases to run : ";
	cin >> t;
	while (t--)
	{
		int size;
        cout<<"Enter the size of the array : ";
		cin >> size;
		int *arr = new int[size];
        cout<<"Enter the values : ";

		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}

		sort012(arr, size);

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}

		delete[] arr;
		cout << endl;
	}

	return 0;
}