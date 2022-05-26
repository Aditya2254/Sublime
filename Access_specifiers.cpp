#include<bits/stdc++.h>
using namespace std;
class hoho{
private:
	int x,y,speed=10;
public:
	void move(int a,int b){
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
    h.move(2,2);
    h.display();
}