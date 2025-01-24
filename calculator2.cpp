#include<iostream>
using namespace std;
int main()
{
	cout<<"Let's calculate!"<<endl;
	float a,b;
	char x; 
	cout<<"Enter first number :"<<endl;
	cin>>a;

	for(int i=0;;i++)
	{
		cout<<"Enter +,-,*,/,= :"<<endl;
		cin>>x;
		if (x=='=')
		break;
		cout<<"Enter next number :"<<endl;
		cin>>b;
		if(x=='+')
		{
			a=a+b;
		}
		else if (x=='-')
		{
			a=a-b;
		}
		else if (x=='*')
		{
			a=a*b;
		}
		else if (x=='/')
		{
			a=a/b;
		}

	}
		cout<<"Result"<<endl;
		cout<<a<<endl;
	
	
	return 0;
}
