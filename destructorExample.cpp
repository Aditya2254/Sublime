#include<bits/stdc++.h>
using namespace std;
class Human{
private:
	int *age;
	string *name;
public:
	Human(int iAge,string iname){
		age=new int;
		name=new string;

		*age=iAge;
		*name=iname;
	}
	~Human(){
		cout<<"All memories are released."<<endl;
		delete age;
		delete name;
	}
	void display(){
		cout<<*name<<endl<<*age<<endl;
	}
};
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    Human *h=new Human(21,"Aditya");
    h->display();
    delete h;
}