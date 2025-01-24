#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of rows of hollow pyramid:"<<endl;
	cin>>n;

	for(int row=0;row<n;row=row+1)
	{ 
		for(int col=0;col<n-row-1;col=col+1)  //spaces
		{
			cout<<" ";
		}
		for(int col=0;col<row+1;col=col+1)  //stars
		{
		if(col ==0 || col == row+1-1)  //print star for first and last colomn
		{
			cout<<"* ";
		}	
		else cout<<"  ";  //for every col between first and last col,print spaces
		}
			cout<<endl;
	}

	
return 0;
}
