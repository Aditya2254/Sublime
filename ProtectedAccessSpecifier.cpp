#include<bits/stdc++.h>
using namespace std;
class Human{
protected:								//It is just like private but it can be inherited to the sub class.
	string name;
public:
	void setName(string iName){
		name=iName;
	}
};

class Student : public Human{			//in public inheritance, the public and protected members of the base class are available to the derived class as it is.
public:
	void display(){
		cout<<"My name is: "<<name<<endl;
	}
};
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    Student s;
    s.setName("Aditya");
    s.display();
}