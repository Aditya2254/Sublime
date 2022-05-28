#include<bits/stdc++.h>
using namespace std;
class Father{
public:
	int height;
	void askFather(){
		cout<<"papa hain tumhare."<<endl;
	}
};

class Mother{
public:
	string color;
	void askMother(){
		cout<<"Mummy hain tumhari."<<endl;
	}
};

class child : public Father,public Mother{
public:
	void setHeightandcolor(string icolor,int iheight){
		color=icolor;
		height=iheight;
	}
	void display(){
		cout<<color<<endl<<height<<endl;
	}
};

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    child adi;
    adi.setHeightandcolor("brown",6);
    adi.display();
}