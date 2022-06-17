#include<bits/stdc++.h>
using namespace std;

struct student{
	int roll;
	string name;
	float marks;
    void display(){
    	cout<<roll<<endl<<name<<endl<<marks<<endl;
    }
}s={12,"Ankur",99.99};					//order of members must be same.

struct student s1={13,"Anurag"};		//in case of partial initialisation, anything after 1st can be left.

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    struct student s2={14,"Aditya",100.00};

    s.display();
    s1.display();
    s2.display();

    struct student a[3];                //array of structure objects.

    for(int i=0;i<3;i++){
        cin>>a[i].roll>>a[i].name>>a[i].marks;
        cout<<a[i].roll<<" "<<a[i].name<<" "<<a[i].marks<<endl;
    }

    struct student *ptr=&s;             //pointer to a structure / structure pointer.

    cout<<s.name<<endl<<ptr->name<<endl<<(*ptr).name<<endl;             
}