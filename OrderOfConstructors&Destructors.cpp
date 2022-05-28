#include<bits/stdc++.h>
using namespace std;
class Human{
public:
	Human(){
		cout<<"Constructor of the Base class is called."<<endl;
	}
	~Human(){
		cout<<"Destructor of the base class is called."<<endl;
	}
};

class Student : public Human{
public:
	Student(){
		cout<<"Constructor of the derived class is called."<<endl;
	}
	~Student(){
		cout<<"Destructor of the derived class is called."<<endl;
	}
};

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    Student adi;
}