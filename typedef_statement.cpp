#include<bits/stdc++.h>
using namespace std;

typedef int integer;				//creates an alias for anything. typedef can be local or global just like other members.

typedef struct student{
	integer roll;
	string name;
	float marks;
}stud;								//here stud is an alias for "struct student", not an object for student.

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    stud s={12,"shrawani",100.00};
    cout<<s.roll<<" "<<s.name<<" "<<s.marks<<endl;

}