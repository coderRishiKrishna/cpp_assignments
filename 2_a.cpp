#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of rows of full pyramid:"<<endl;
	cin>>n;
	for(int row=0;row<n;row=row+1)
 {
	for(int col=0;col<n-row-1;col=col+1)
{
	cout<<" ";
}
	for(int col=0;col<row+1;col=col+1)
{
	cout<<"* ";
}
    
	cout<<endl;
 }

	return 0;
}
