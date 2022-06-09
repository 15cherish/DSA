/*Given an array arr[] denoting heights of N towers and a positive integer K,
 you have to modify the height of each tower either by increasing or decreasing them by K only once. After modifying, height should be a non-negative integer. 
 Input:
K = 2, N = 4
Arr[] = {1, 5, 8, 10}
Output:
5
Explanation:
The array can be modified as {3, 3, 6, 8}. The difference between the largest and the smallest is 8-3 = 5.

Input:
K = 3, N = 5
Arr[] = {3, 9, 12, 16, 20}
Output:
11
Explanation:
The array can be modified as{6, 12, 9, 13, 17}. The difference between the largest and the smallest is 17-6 = 11.

5
10
2 6 3 4 7 2 10 3 2 1
 */

#include<iostream>
using namespace std;
	//sorting 
	int sort(int a[],int n)
{

	int min = a[0];
	int max = a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	return max-min;
}


int main()
{
	int a[]={2,6,3,4,7,2,10,3,2,1};
	int k =5;
	int n=10;
	

	
	if(a[0]-k>0)
	{
		a[0]=a[0]-k;
	}
	if(a[0]-k<=0)
	{
		a[0]=a[0]+k;
	}
	
	for(int i=1;i<n;i++)
	{
		if(a[i]-k>0 && a[i]-k!=a[i-1])
		{
			a[i]=a[i];
			
			
		}
		
		else
		{
			a[i]=a[i]+k;
		}
	}
	int max;
	for(int i=0;i<n;i++)
	{
		int max1,max2;
		//cout<<a[j]<<endl;
			if(a[i]-k>0 && a[i]-k!=a[i-1])
		{
			a[i]=a[i]-k;
			max1=sort(a,n);
			a[i]=a[i]+k;
			a[i]=a[i]+k;
			max2 = sort(a,n);
			a[i]=a[i]-k;
			
			if(max1<max2)
			{
				a[i]=a[i]-k;
				max=max1;
			}
			else
			{
				a[i]=a[i]+k;
				max=max2;
			}
			
		}
		
	}
	
for(int i=0;i<n;i++)
{
	cout<<a[i]<<endl;
}
	
	cout<<"difference is"<<max<<endl;
}
