//stacks using arrays
//name for class stackarr
#include<iostream>
using namespace std;
class stackarr
{
	public:
	int arr[100];
	int n = 100; 
	int head;
	//constructor
	stackarr()
	{
		top = -1;
	}
	void push(int value)
	{
		if(top>=n-1)
		{
			cout<<"error"<<endl;
		}
		else
		{
			top++;
			arr[top]=value;
		}
	}
	void pop()
	{
		if(top <= -1)
		{
			cout<<" empty"<<endl;
		}
		else
		{
			top--;
		}
	}
	bool isempty()
	{
		if(top<= -1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void size()
	{
		int j = 0;
		for(int i = top;i>=0;i--)
		{
			j++;
		}
		cout<<"The size of the stack is "<<j<<endl;
	}
	void display()
	{
		for(int i=top;i>=0;i--)
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
	stackarr arr1;
	//ask for the length of array
	cout<<"eneer no of elements under 100"<<endl;
	cin>>n;
	for(int i =0;i<n;i++)
	{
		arr1.push(i);
	}
	arr1.push(5);
	arr1.display();
	arr1.pop();
	arr1.display();
	arr1.size();
	return 0;
}
