#include<bits/stdc++.h>
using namespace std;
class Human{
public:
	Human(){
		cout<<"Constructor called."<<endl;
	}
	~Human(){
		cout<<"Destructor called."<<endl;
	}
};
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    Human *adi=new Human();
    delete adi;
}