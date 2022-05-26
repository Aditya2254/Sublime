#include<bits/stdc++.h>
using namespace std;
class Human{
public:
	static int human_count;
	Human(){
		++human_count;
	}
	void humanTotal(){
		cout<<"There are "<<human_count<<" people present."<<endl;
	}
};
int Human::human_count=0;						//static members can't be defined inside the class.
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
cout<<Human::human_count<<endl;
Human a;
Human b;
Human c;
Human d;
b.humanTotal();
cout<<Human::human_count<<endl;
}