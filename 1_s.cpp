#include<iostream>
using namespace std;
int main()
{
	int rows;
	cout<<"Enetr the number of rows of inverted half pyramid:"<<endl;
	cin>>rows;

	for(int row=0;row<rows;row=row+1)
{
	for(int col=0;col<rows-row;col=col+1)
 {
	cout<<"* ";
 }
	cout<<endl;

}


return 0;
}
