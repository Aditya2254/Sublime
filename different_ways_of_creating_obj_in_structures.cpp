#include<bits/stdc++.h>
using namespace std;

struct human{
	int age;
	string name;
	string race;
}h;

struct {							//name of a struct is not necessary.
	int iAge;
	string iName;
	string iRace;
}a;									//nameless structures objects cannot be created inside main.

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    human p;
    p.age=21;
    p.name="Anshu";
    p.race="Indian";

    h.age=33;
    h.name="Aditya";
    h.race="Asian";

    a.iAge=23;
    a.iName="Aditya raj";
    a.iRace="Asian";

    cout<<h.age<<endl;
    cout<<h.name<<endl<<h.race<<endl;

    cout<<a.iAge<<endl;
    cout<<a.iName<<endl<<a.iRace<<endl;

    cout<<p.age<<endl;
    cout<<p.name<<endl<<p.race<<endl;
}