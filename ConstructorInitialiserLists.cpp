#include<bits/stdc++.h>
using namespace std;
class Entity{
private:
	string name;
	int id;
public:
	Entity()
		:name("Unknown"),id(0)			//the order must be the same as the declaration.This saves multiple lines of code if you have a lot of variables to initialise.
	{
		// name="Unknown";
	}
	Entity(string iName)
		:name(iName),id(6)				//This saves memory bcos otherwise the member is initialised twice and only one is used.
	{
		// name=iName;
	}
	void display(){
		cout<<name<<endl<<id<<endl;
	}
};

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    Entity e;
    e.display();

    Entity a("Aditya");
    a.display();
}