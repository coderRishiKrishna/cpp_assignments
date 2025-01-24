#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Teacher{
    //properties 

private:
        double salary;

//access modifiers
public:
    string name;
    string dept;
    string subject;

    //methods / member functions
    void changeDept(string newDept){
        dept = newDept;
    }
};



int main()
{
    Teacher t1;
    t1.name = "Rishi";
    t1.dept = "CS";
    t1.subject = "C++";
    t1.salary = 36000;
    cout<<t1.name<<endl;

    return 0;
}

//objects are entities in the real world
//class is like a bluprint of these entities
//encapsulation is wrapping up of data and member functions in a single unit called class.
//it also act  as data hiding

/*Constructor
    special method invoked automatically at time of object creation. Used for initialisation.
    -> same name as class
    ->constructor doesnot have a return type
    -> only called once (automatuically), at object creation
    -> Memory allocation happens when constructor is called
    */