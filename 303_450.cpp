#include <iostream>
using namespace std;

struct stack{
	int top=-1,n;
	int a[10];

	void push(int element)
	{
		top=top+1;
		a[top]=element;
		
	}
	
	void pop()
	{
		top--;
	}
	
	void isEmpty()
	{
		if(top==-1)
		{
			cout<<"stack is empty"<<endl;
		}
	}
	
	void isFull()
	{
		if(top==n)
		{
			cout<<"stack is full"<<endl;
		}
	}
	
	void getMin()
	{int k=a[0];
	for(int i=1;i<top;i++)
	{
		if(a[i]<a[0])
		k=a[i];
	}
	cout<<"The smallest element is "<<k<<endl;
	}
}s;

int main()
{
	s.n=10;
	s.isEmpty();
	s.push(21);
	s.push(10);
	s.push(2);
	s.pop();
	s.push(32);
	s.push(100);
	s.push(34);
	s.getMin();
	s.push(1);
	s.push(45);
	s.getMin();
	
}
