//n=5
//input=[6,8,0,1,3]
//output=[8,-1,1,3,-1]

#include <iostream> 
using namespace std;

struct{
	void func(int a[],int n)
	{
		int b[10];
		for(int i=0;i<n;i++)
		{
			for(int j=i;j<n;j++)
			{
				if(a[j]>a[i])
				{
					b[i]=a[j];
					break;
				}
				else
				b[i]=-1;
			}
		}
		
		for(int i=0;i<n;i++)
		{
			cout<<b[i]<<" ";
		}
	}
}s;

int main()
{
	//int a[]={6,8,0,1,3};
	int a[]={1,3,2,4};
	int n=4;
	//int n=5;
	s.func(a,n);
}
