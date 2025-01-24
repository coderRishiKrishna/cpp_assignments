#include <iostream>
using namespace std;
int main()
{
int ROWS,COLS;
cout<<"Enter number of rows:"<<endl;
cin>>ROWS;
cout<<"Enter number of colomns:"<<endl;
cin>>COLS;

	for(int r=0;r<ROWS;r=r+1)
{
	for(int c=0;c<COLS;c=c+1)
 {
	if( r==0 || r==ROWS-1)
  {
    	cout<<"* ";


  }
	else
   {
   	if(c==0||c==COLS-1)
    {
         cout<<"* ";
    }
	else
     {
         cout<<"  ";
     }

   }



 }
	cout<<endl;
}

return 0;
}
