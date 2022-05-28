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

class Student : protected Human{			//In protected inheritance, the public and protected members of the base class act as private members of the derived class.
public:
	void display(){
		cout<<name<<endl;
	}
	void setStudentName(string iName){		//public member can access the protected members of the class i.e setName method.
		setName(iName);
	}
};

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    Student adi;
    // adi.setName("Aditya");					//wouldn't work bcos this is a member of base class and acting as a protected member of the derived class. so it can't be accessed outside.
    adi.setStudentName("Aditya");
    adi.display();
}