#include<iostream>
using namespace;
int main()
{
	int arr[10];
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the 2nd array:"<<endl;
	int arr[5];
	for(int j=0;j<5;j++)
	{
		cin>>arr[j];
	}
	for(int j=0;j<5;j++)
	{
		for(int i=0;i<10;i++)
		{
			if (arr[i]==arr[j])
			cout<<"True"<<endl;
			break;
		}


	
	}




















	return 0;
}
