#include<bits/stdc++.h>
using namespace std;

class Person{
public:
	virtual void introduce()=0;			//This is how a Pure Virtual Function is decleared. Pure Virtual Functions are Functions which has to be overridden in the subclass or there will be error.
};

void Person :: introduce(){				//Its not standard to define Pure Virtual Functions in the base class but if you want to do so, it can be done outside the class using the scope resolution operator. Even if you define it, you still need to override in the subclass.
	cout<<"Hi from Person."<<endl;
}

class Student : public Person{
public:
	void introduce(){
		cout<<"Hi from Student."<<endl;
	}
};
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

}
//When you have one or more pure virtual methods in a class, the class is called abstract class.
//You can't create an obj of the abstract class.
//An Abstract class can be used as an incomplete type which can be used as a foundation of the derived class.