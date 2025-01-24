#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of rows of inverted hollow pyramid:"<<endl;
	cin>>n;

	for(int row=0;row<n;row=row+1)
	{  //for  spaces
		for(int col=0;col<row;col=col+1)
		{
			cout<<" ";
		}
		//for stars
		for(int col=0;col<n-row;col=col+1)
		{
		//print stars on only first col and last col
		if(col ==0 || col== n-row-1)
		{
			cout<<"* ";
		}
		else cout<<"  ";
		}
		cout<<endl;
	}

return 0;
}
