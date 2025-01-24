#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of half rows of the hollow diamond:"<<endl;
	cin>>n;

	//for upper hollow pyramid part

	for(int row=0;row<n;row=row+1)
	{
         for(int col=0;col<n-row-1;col=col+1)
	{
		cout<<" ";
	}
	for(int col=0;col<row+1;col=col+1)
	{
		if(col==0 || col==row+1-1)
		{
			cout<<"* ";
		}
		else	cout<<"  ";
	}
		cout<<endl;

	}

	//for lower hollow pyramid part

	for(int row=0;row<n;row=row+1)
	{
	 for(int col=0;col<row;col=col+1)
	 {
		cout<<" ";
	 }
	 for(int col=0;col<n-row;col=col+1)
	 {
		if(col==0 || col== n-row-1)
		{
			cout<<"* ";
		}
		else	cout<<"  ";

	 }
		cout<<endl;
	}
return 0;
}
