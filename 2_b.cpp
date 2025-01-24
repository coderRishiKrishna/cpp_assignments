#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of rows of inverted full pyramid :"<<endl;
	cin>>n;
	for(int row=0;row<n;row=row+1) //for outer loop 
{                                           //for inner loop
	for(int col=0;col<row;col=col+1)    //for printing spaces
{
	cout<<" ";	
}
	for(int col=0;col<n-row;col=col+1)   //for printing stars
{
	cout<<"* ";
}
	cout<<endl;

}




	return 0;
}
