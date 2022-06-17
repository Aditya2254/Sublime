#include<bits/stdc++.h>
using namespace std;
#pragma pack(1)							//this packs the structure and leaves no space for structure padding.
//removing packing will result in padding and hence the memory allocation will be: c--- nnnn b--- where "-" means empty byte for allignment/padding.
//so size becomes 12 byte but it increases cpu performance bcos it can fetch any member in only one cycle.
//in case of packing, the cpu has to do multiple cycles to fetch a member bcos 32-bit cpu has 4 byte addressable memory and 64-bit cpu has 8 byte addressable memory.
struct student{
	char c;
	int n;
	char b;
};

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    struct student s;
    cout<<sizeof(s);

}