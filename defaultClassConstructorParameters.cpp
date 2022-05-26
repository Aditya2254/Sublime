#include<bits/stdc++.h>
using namespace std;
class Human{
private:
	int age;
	string name;
public:
	// Human(){
	// 	cout<<"Default constructor."<<endl;
	// 	age=0;
	// 	name="Default";
	// }
	Human(int iAge=21,string iname="aditya"){		//be careful that the constructor with default values doesn't become ambiguous with any other constructor.
		cout<<"Overloaded constructor."<<endl;
		age=iAge;
		name=iname;
	}
	void display(){
		cout<<age<<endl<<name<<endl;
	}
};
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    Human h;
    h.display();

    Human a(23);
    a.display();

    Human p(25,"anshu");
    p.display();
}