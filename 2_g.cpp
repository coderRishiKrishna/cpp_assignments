#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the half number of flipped solid diamond :"<<endl;
	cin>>n;

	for(int row=0;row<n;row=row+1)
	{
	//for upper part
	//for 1st inverted pyramid
		for(int col=0;col<n-row;col=col+1)
		{
			cout<<"* ";
		}
	//for full pyramid
		for(int col=0;col<2*row+1;col=col+1)
		{
			cout<<"  ";
		}
	//for 2nd inverted pyramid
		for(int col=0;col<n-row;col=col+1)
		{
			cout<<"* ";
		}
			cout<<endl;
	}
	for(int row=0;row<n;row=row+1)
	{
	//for lower part
	//for 1st half pyramid
		for(int col=0;col<row+1;col=col+1)
		{
			cout<<"* ";
		}
	//for inverted full pyramid
		for(int col=0;col<2*n-2*row-1;col=col+1)
		{
			cout<<"  ";
		}
	//for 2nd half pyramid
		for(int col=0;col<row+1;col=col+1)
		{
			cout<<"* ";
		}
		cout<<endl;
	}

return 0;
}
