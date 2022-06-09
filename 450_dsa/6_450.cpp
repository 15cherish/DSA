/*Given two arrays a[] and b[] of size n and m respectively. The task is to find union between these two arrays.
Input:
5 3
1 2 3 4 5
1 2 3
Output: 
5
Explanation: 
1, 2, 3, 4 and 5 are the elements which comes in the union set of both arrays. So count is 5.*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int doUnion(int a[],int n,int b[],int m)
{
	int k[20];
	int p[20];
for(int i=0;i<n;i++)
{
	k[i]=a[i];
}
int c=0;
for (int j=n;j<n+m;j++)
{
	k[j]=b[c];
	c++;
}

for(int i=0;i<m+n;i++)
{
	cout<<k[i]<<" ";
}
cout<<endl;
p[0]=k[0];
int s =1;
for(int j=1;j<n+m;j++)
{
	int flag=0;
	for(int a=0;a<j;a++)
	{
		if(k[j]!=k[a])
		{
			flag++;
			
		}
	}
		if (flag==j)
		{
		p[s]=k[j];
			s++;
		}
	
}

cout<<"s is"<<s<<endl;

}
int main()
{
int a[]={1,2,3,4,5};
int b[]={1,2,3,5,3};
int n = 5;
int m = 5;
doUnion(a,n,b,m);	
}
