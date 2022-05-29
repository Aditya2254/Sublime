#include<bits/stdc++.h>
using namespace std;
class Person{
public:
	virtual void introduce(){						//virtual functions will not execute if it has been overridden in subclass.
		cout<<"Hi from Person."<<endl;
	}
};

class Student : public Person{
public:
	void introduce(){
		cout<<"Hi from Student."<<endl;
	}
};

class Farmer : public Person{
public:
	void introduce(){
		cout<<"Hi from Farmer."<<endl;
	}
};
void whosThis(Person &p){
	p.introduce();
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    Student s;
    whosThis(s);

    Farmer f;
    whosThis(f);

    Person *p = new Student();
    p->introduce();
}
