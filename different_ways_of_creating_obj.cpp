#include<bits/stdc++.h>
using namespace std;
class info{
public:
	string name;
	void introduce(){
		cout<<"Name: "<<name<<endl;
	}
};

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    info i;								//object created will be stored in stack.
    
    info *k = new info();				//object created will be stored in heap, dynamically allocated.

    i.name="Aditya";
    i.introduce();

    k->name="Anshu";
    k->introduce();
}