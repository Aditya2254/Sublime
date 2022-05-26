#include<bits/stdc++.h>
using namespace std;
class Log
{
public:
	const int logLevelInfo=1;
	const int logLevelWarning=2;
	const int logLevelError=3;
private:
	int m_loglevel;
public:
	 setLogLevel(int loglevel){
	 	m_loglevel=loglevel;
	 }
	 void info(string s){
	 	if (m_loglevel<=1)
	 		cout<<"[INFO]: "<<s<<endl;
	 }
	 void warn(string s){
	 	if (m_loglevel<=2)
	 		cout<<"[WARNING]: "<<s<<endl;
	 }
	 void error(string s){
	 	if (m_loglevel<=3)
	 		cout<<"[ERROR]: "<<s<<endl;
	 }
};

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    Log l1;
    l1.setLogLevel(l1.logLevelWarning);
    l1.warn("hoho");
    l1.info("hihi");
    l1.error("haha");
}