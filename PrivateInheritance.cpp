#include<bits/stdc++.h>
using namespace std;
class Human{
protected:
	string name;
public:
	void setName(string iName){
		name=iName;
	}
};

class Student : private Human{						//In private inheritance, the public and protected members of the base class act as private members of the derived class.
public:
	void display(){
		cout<<name<<endl;
	}
	void setStudentName(string iname){
		name=iname;
	}
};

class Alumni : public Student{
public:
	// void set(string iname){
	// name=iname						//This won't work bcos name acts as a private member of the Student class.
	// }
};
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    Alumni a;
    a.setStudentName("Aditya");
    a.display();
}