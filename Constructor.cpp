#include<bits/stdc++.h>
using namespace std;
class Human{
private:
	string name;
	int age;
public:
	Human(){
		name="NoName";
		age=0;
	}
	void display(){
		cout<<name<<endl<<age<<endl;
	}
};

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
Human h;
h.display();
}