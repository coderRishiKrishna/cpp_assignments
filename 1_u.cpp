#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of rows of inverted numeric half pyramid:"<<endl;
	cin>>n;

		for(int row=0;row<n;row++)
 {	
		 for(int col=0;col<n-row;col++)
   {
			cout<<col+1<<" ";
   }
				cout<<endl;
 }






return 0;
}
