//find maximum and minimum element in an array
#include <iostream>
using namespace std;

int main()
{
	int arr[]={9,1,8,2,7,3,6,5,4,10,-1,-2,0};
	int n = sizeof(arr)/sizeof(arr[0]);
	int max = arr[0];
	int min = arr[0];
	
	for (int i=1;i<n;i++)
	{
	if(arr[i]>max)
	max=arr[i];
	if(arr[i]<min)
	min=arr[i];	
	}
	
	cout<<max<<endl;
	cout<<min<<endl;
}
