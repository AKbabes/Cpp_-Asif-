#include<iostream>
#include<cstring>
#include"IO.h"
using namespace std;
int main(){
	inout();
	string s;
	getline(cin,s);
	int l=s.length();
	// cout<<l;
	if(l>80){
		cout<<"NO"<<endl;
	}
	else{
		cout<<"YES"<<endl;
	}
return 0;
}