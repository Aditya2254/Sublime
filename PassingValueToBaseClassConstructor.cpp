#include<bits/stdc++.h>
using namespace std;
class Father{
protected:
	int height;
public:
	Father(int iheight){
		height=iheight;
		cout<<"Father class constructor is called."<<endl;
	}
};

class Mother{
protected:
	string color;
public:
	Mother(string iColor){
		color=iColor;
		cout<<"Mother class constructor is called."<<endl;
	}
};

class child : public Father,public Mother{
	public:
		child(int x,string y) : Father(x),Mother(y){
			cout<<"Child class constructor is called."<<endl;
		}
		void display(){
			cout<<"Height: "<<height<<endl<<"Skincolor: "<<color;
		}
};

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    child adi(6,"brown");
    adi.display();
}
