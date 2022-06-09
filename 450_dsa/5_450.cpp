/*Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
Output: -12 -13 -5 -7 -3 -6 11 6 5
Time complexity: O(N) 
Auxiliary Space: O(1)*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[]={-12,11,-13,-5,6,-7,5,-3,-6};
	int n=sizeof(arr)/sizeof(arr[0]);
	int l=0;
	int r=n-1;
	int swap =0;
	while(l<r)
	{
	if(arr[l]<0)
		l++;
	if(arr[r]>0)
		r--;
	if(arr[l]>0 && arr[r]<0 && l<r)
	{
		swap = arr[l];
		arr[l]=arr[r];
		arr[r]=swap;
	}
		
	}
	for(int k=0;k<n;k++)
	{
		cout<<arr[k]<<endl;
	}
}
