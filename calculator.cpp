#include<iostream>
using namespace std;
int main()
{
	float a,b;
	char operand;
	cout<<"Enter first number a:"<<endl;
	cin>>a;
	cout<<"Enter operator:"<<endl;
	cin>>operand;
	cout<<"Enter second number b:"<<endl;
	cin>>b;
	cout<<"Result :"<<endl;
		
	if(operand=='+')
	{
		cout<<(a+b)<<endl;
	}
	else if (operand=='-')
	{
		cout<<(a-b)<<endl;
	}
	else if (operand=='*')
	{
		cout<<(a*b)<<endl;
	}
	else if (operand =='/')
	{
		cout<<(a/b)<<endl;
	}
	else	cout<<"Invalid"<<endl;


	return 0;
}
