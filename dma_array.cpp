#include<iostream>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
    	freopen("output.txt","w",stdout);
    #endif
	int *pointer=NULL;
	int input;
	cin>>input;
	pointer=new int[input];
	int temp;
	for (int i = 0; i < input; i++)
	{
		cin>>temp;
		*(pointer+i)=temp;
	}
	for (int i = 0; i < input; i++)
	{
		cout<<*(pointer+i)<<" ";
	}
	delete []pointer;

	return 0;
}