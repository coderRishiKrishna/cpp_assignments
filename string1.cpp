#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the no of strings:"<<endl;
	cin>>n;
	string arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	for(int j=0;j<n;j++)
	{
		cout<<"Hello"<<endl<<arr[j]<<endl;
	}








	return 0;
}
