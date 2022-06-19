#include<bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    int n, *ptr;
    // cout<<"Enter the size: "<<endl;
    cin>>n;
    // cout<<"Enter the elements: "<<endl;
    ptr=(int*) calloc(n,sizeof(int));

    for(int i=0;i<n;i++){
    	cin>>*(ptr+i);
    }

    for(int i=0;i<n;i++){
    	cout<<*(ptr+i)<<" ";
    }
    cout<<endl;
    int *ptr1;

    // cout<<"Enter the new size: "<<endl;
    cin>>n;

    ptr1= (int*) realloc(ptr,n*sizeof(int) );				//This readjusts the size of the dynamically allocated block. The first argument is the pointer to the base location of the allocated block. The second block is the new size of the allocated block.
    //ptr= (int*) realloc(NULL, n*sizeof(int) );			//This is just like malloc(n*sizeof(int)); as the input pointer is null so it allocates new memory just like malloc or calloc.
    //ptr= (int*) realloc(ptr,NULL);						//This is just like free(ptr); as it resizes the allocated block to size NULL. which means it deallocates the allocated memory. 

    for(int i=0;i<n;i++){
    	cout<<*(ptr1+i)<<" ";
    }
    cout<<endl<<"Previous address: "<<ptr<<endl<<"New address: "<<ptr1<<endl;
    free(ptr1);
}