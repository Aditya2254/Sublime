#include<bits/stdc++.h>
using namespace std;
class Human{
public:
	int age;
	string name;
	void setAge(int iAge){
		age=iAge;
	}
	void setName(string iName){
		name=iName;
	}
};

class Student : public Human{				//the derived class inherits all the non private members except the constructors,destructors,overloaded operators & friend functions of the base class.
public:
	int id;
	void setId(int iId){
		id=iId;
	}
	void introduce(){
		cout<<"Hi i am "<<name<<" and i am "<<age<<" years young."<<endl<<"My Student id is: "<<id;
	}
};

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    Student adi;
    adi.setAge(23);
    adi.setName("Aditya");
    adi.setId(126);
    adi.introduce();
}