#include<bits/stdc++.h>
using namespace std;
struct hoho							//default public
{
	int x,y,speed=10;
	void move(int a, int b){
		x=a*speed;
		y=b*speed;
	}
	void display(){
		cout<<x<<endl;
		cout<<y<<endl;
	}
};

class hihi							//default private
{
public:
	int x,y,speed=10;
	void move(int a, int b){
		x=a*speed;
		y=b*speed;
	}
	void display(){
		cout<<x<<endl;
		cout<<y<<endl;
	}
};
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    hoho h;
    h.move(3,4);
    h.display();

    hihi i;
    i.move(4,5);
    i.display();
}