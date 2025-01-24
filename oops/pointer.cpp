#include<iostream>
#include<vector>
using namespace std;

//pointers are special variables that store address of other variables
int main(){
    int a = 11;
    int* ptr = &a;
    cout<<ptr<<endl;
    cout<<&a<<endl;
    cout<<&ptr<<endl;

    return 0;
}
