#include<bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
int n, *ptr;
cin>>n;
ptr=(int*) malloc(n*sizeof(int));				//memory allocation(malloc) dynamically allocates memory of given size.
for(int i=0;i<n;i++){
	cin>>*(ptr+i);
}
for(int i=0;i<n;i++){
	cout<<*(ptr+i)<<" ";
}
free(ptr);

cout<<endl;

ptr=(int*) calloc(n, sizeof(int));				//contunuous mem. allocation(calloc) dynamically allocates 'N' memory blocks of same size and initialises it with 0;

for(int i=0;i<n;i++){
	cout<<*(ptr+i)<<" ";
}
free(ptr);
}