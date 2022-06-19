#include<bits/stdc++.h>
using namespace std;
int *display(int n){
	int *ptr;
	ptr=(int*) malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		cin>>*(ptr+i);
	}
	return ptr;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n;
    cin>>n;
    int *ptr1;
    ptr1=display(n);
    for(int i=0;i<n;i++){
		cout<<*(ptr1+i);
	}
	free(ptr1);
}