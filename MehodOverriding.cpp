#include<bits/stdc++.h>
using namespace std;
class Father{
public:
	void introduce(){
		cout<<"Hi, i am Father."<<endl;
	}
};
class child :public Father{
public:
	void introduce(){
		cout<<"Hi, i am child."<<endl;
		Father::introduce();					//this is how we access the overridden method in the derived class.
	}
};

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    child adi;
    adi.introduce();

    adi.Father::introduce();					//this is how we access the overridden method outside using the derived class object.
}