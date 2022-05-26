#include<bits/stdc++.h>
using namespace std;
class Human{
private:
	int age;
	int fakeAge(){
		return age-2;
	}
public:
	void displayAge(){
		cout<<fakeAge()<<endl;
	}
	void setAge(int val){
		age=val;
	}
};
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
Human h;
h.setAge(23);
h.displayAge();
}