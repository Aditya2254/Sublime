#include<bits/stdc++.h>
using namespace std;

class Person{
public:
	virtual void introduce(){
		cout<<"Hi from person."<<endl;
	}
};

class Student :public Person{
public:
	void introduce(){
		cout<<"Hi from Student."<<endl;
	}
};

class GStudent :public Student{
public:
	void introduce(){
		cout<<"Hi from Graduate Student."<<endl;
	}
};

class DeadStudent : public GStudent{		//when a virtual function is not redefined in the derived class, the version in the base class is used.
public:

};

void whosThis(Person &p){
	p.introduce();
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    Person a;
    Student b;
    GStudent c;
    DeadStudent d;

    whosThis(a);
    whosThis(b);
    whosThis(c);
    whosThis(d);

    Student *s = new GStudent();		//virtual functions are inherited as virtual functions. if the derived class is used as a base class for another inheritance, the inherited virtual function will work as a virtual function of the current class.
    s->introduce();
}