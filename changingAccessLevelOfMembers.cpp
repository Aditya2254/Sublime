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

class Student : private Human{	//changing access level of Base class members in Derived class.					
public:
	using Human :: name;				//Here the member 'name' of the base class was in private block, by declearing it like this in the public block, now it's access level has changed to public.
	using Human :: setName;
	void display(){
		cout<<name<<endl;
	}
	// void setStudentName(string iname){
	// 	name=iname;
	// }
};

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    Student a;
    a.setName("Aditya");
    a.display();
}