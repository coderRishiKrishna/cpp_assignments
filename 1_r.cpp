#include <iostream>
using namespace std;
int main()
{
	int rows;
	cout<<"Enter number of rows of half pyramid:"<<endl;
	cin>>rows;

	for(int row=0;row<rows;row=row+1)
 {
	for(int col=0;col<row+1;col=col+1)
  {
	cout<<"* ";


  }
	cout<<endl;



 }


return 0;
}
