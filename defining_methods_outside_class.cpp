#include<bits/stdc++.h>
using namespace std;
class Human{
public:
    string name="Anshu";
	void introduce();
};
// string Human::name="hoho";						//won't work bcos name is non static.
void Human::introduce(){
	cout<<"Name: "<<Human::name<<endl;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    Human h;
    // h.name="Aditya";
    h.introduce();
}