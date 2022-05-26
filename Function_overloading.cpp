#include<iostream>
using namespace std;
void display(){
	cout<<"hoho"<<endl;
}
// int display(){						Just changing return types doesn't work.
// 	cout<<"hoho"<<endl;
// }
void display(string s){
	cout<<"hoho"<<" "<<s<<endl;
}
int main(){
	#ifndef ONLINE_JUDGE
	    freopen("input.txt","r",stdin);
	    freopen("output.txt","w",stdout);
	#endif
	string s;
	cin>>s;
	display();
	display(s);
	return 0;
}