/*Input:
N = 6
arr[] = 7 10 4 3 20 15
K = 3
Output : 7
Explanation :
3rd smallest element in the given array is 7.
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(log(n))*/

#include <iostream>
using namespace std;

int main()
{
	int arr[] = {7,10,4,3,20,15};
	int k = 3;
	int min = arr[0];
	int n = sizeof(arr)/sizeof(arr[0]);
	//sort an array
	int swap[10];
	min=arr[0];
	for(int i=0;i<n;i++)
	{
		for(int j =i;j<n;j++)
		{
			if(arr[j]<arr[i])
			{
			min = arr[j];	
			arr[j] = arr[i];
			arr[i] = min;
			}	
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	cout<<endl<<"The k th min element is : ";
	cout<<arr[k-1]<<endl;
}
