//queues using array
#include<iostream>
using namespace std;
class QueueArr
{
	public:
	int top;
	int bottom;
	int arr[100];
	int n = 100;
	QueueArr()
	{
		top = -1;
		bottom = -1;
	}
	void enqueue(int value)
	{
		if(top == -1)
		{
			top++;
			arr[top] = value;
			bottom ++;
		}
		if(top >= n-1)
		{
			cout<<"error"<<endl;
		}
		else
		{
			top ++;
			arr[top] = value;
		}
	}
	void dequed()
	{
		if(top<bottom)
		{
			cout<<"no elements"<<endl;
		}
		else
		{
			bottom ++;
		}	
	}
	void size()
	{
		int j=0;
		for(int i=top; i>bottom;i--)
		{
			j++;
		}
		cout<<"The size of the queue is"<<j<<endl;
	}
	int isempty()
	{
		if(top<=-1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void display()
	{
		for(int i = top;i>bottom;i--)
		{
			cout<<arr[i];
		}
		cout<<endl;
	}
};
//write the main function
int main()
{
	int n;
	QueueArr qarr;
	cout<<"eneter number of element under 100"<<endl;
	cin>>n;
	for(int i =0;i<n;i++)
	{
		qarr.enqueue(i);
	}
	qarr.display();
	qarr.dequed();
	qarr.display();
	qarr.size();
	return 0;
}
