#include<bits/stdc++.h>
using namespace std;

class Animal{
public:
	int age;
	void walk(){
		cout<<"Animal walks."<<endl;
	}
	Animal(){
		cout<<"Animal constructor is called"<<endl;
	}
};

class tiger :virtual public Animal{						//This is how we can use virtual inheritance to resolve ambiguity in diamond problem.
public:
	tiger(){
		cout<<"Tiger constructor is called."<<endl;
	}
};
class lion :virtual public Animal{						//If the inherited class is going to be inherited further, then it is good practise to use virtual inheritance.
public:
	lion(){
		cout<<"Lion constructor is called."<<endl;
	}
};
class liger :public tiger,public lion{					//virtual inheritance has a different order of execution of constructors at the time of object creation.
public:
	liger(){
		cout<<"Liger constructor is called."<<endl;
	}
};
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    liger l;
    l.walk();
}