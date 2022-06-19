#include<bits/stdc++.h>
using namespace std;
int sum(){
	int *ptr =(int*) malloc(2*sizeof(int));
	int sum=0;
	cin>>*ptr>>*(ptr+1);
	sum=*ptr + *(ptr+1);
	free(ptr);							//if we don't free the memory here then the memory allocated from the previous function call will stay there as garbage value and it will stay in the memory for no reason. this condition is called memory leak. java and python has garbage collectors to prevent this but c++ doesn't has this concept. so we have to be careful to deallocate the memory after it has been used.
	return sum;
}
int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int a=1;
    while(a){
    	cout<<sum()<<endl;
	    cout<<"Enter 1 to sum & 0 to exit."<<endl;
	    cin>>a;
    }
}