#include<bits/stdc++.h>
using namespace std;
class Human{
private:
	int age;
	string name;
public:
	Human(){													//if you specify any parameterised constructor, then compiler won't give you a default constructor.
		cout<<"Default constructor."<<endl;
		age=0;
		name="Default";
	}
	Human(int iAge){
		cout<<"Constructor that takes age as parameter."<<endl;
		age=iAge;
		name="HoHo";
	}
	Human(string iname){
		cout<<"Constructor that takes name as parameter."<<endl;
		age=0;
		name="hoho";
	}
	Human(int iAge, string iname){
		cout<<"Constructor that takes name and age as parameter."<<endl;
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
    Human aditya;
    aditya.display();

    Human anshu(21);
    anshu.display();

    Human adi("aditya");
    adi.display();

    Human a(21,"anshu");
    a.display();

}