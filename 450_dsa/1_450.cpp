/*Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	int swap[10];
	int arr[]={4,5,1,2,6,3,1,9,8,5,4};
	int n=sizeof(arr) / sizeof (arr[0]);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
		swap[i]=arr[i];
	}
	
	cout<<endl;
	cout<<"Printing the reversed array without changing the array"<<endl;
	for(int i=n;i--;i>0)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"Reversing the array"<<endl;
for(int j=0;j<n;j++)
{
arr[j]=swap[n-j-1];
cout<<arr[j]<<" ";	
}	

	
}

