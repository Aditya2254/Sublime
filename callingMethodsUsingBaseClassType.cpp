#include<bits/stdc++.h>
using namespace std;
class person{
public:
	void introduce(){
		cout<<"Hi from person."<<endl;
	}
};

class student : public person{
public:
	void introduce(){
		cout<<"Hi from student."<<endl;
	}
};

void whoareyou(person p){
	p.introduce();
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    student *s = new student();
    s->introduce();


    whoareyou(*s);

    person *p = new student();
    p->introduce();

    student a;
    whoareyou(a);
}