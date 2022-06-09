/*
Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.
Input:
N = 5
Arr[] = {1,2,3,-2,5}
Output:
9
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

9
-2 1 -3 4 -1 2 1 -5 4
*/
#include <iostream>
using namespace std;

int main()
{
	int arr[]={-1,-2,-3,-4};
	int n = 4;
	
	int max[n];
	
	for(int i=0;i<n;i++)
	{
		int sum = arr[i];
		max[i]=arr[i];
		for(int j=i+1;j<n;j++)
		{
			
			sum = sum+arr[j];
			if(sum>=max[i])
			{
				max[i]=sum;
			}
		}
		cout<<i<<" "<<max[i]<<endl;
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<max[i]<<endl;
	
	}
	
	int maxx;
	maxx=max[0];
	cout<<maxx<<endl;
	for (int k=0;k<n-1;k++)
	{
		if(max[k+1]>maxx)
		{
			maxx = max[k+1];
			cout<<"max[k+1]"<<max[k+1]<<endl;
			cout<<"maxx"<<maxx<<endl;
			cout<<"if loop"<<maxx<<endl;
		}
		
		else
		{
		//	continue;
		cout<<"max[k+1]"<<max[k+1]<<endl;
			cout<<"maxx"<<maxx<<endl;
		cout<<"else loop"<<maxx<<endl;
		}
	}
	
	cout<<maxx<<endl;
}



