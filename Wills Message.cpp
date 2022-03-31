#include<iostream>
#include<cstring>
#include"IO.h"
using namespace std;
int main(){
	inout();
	string s;
	int n;
	while(cin>>s){
		cin>>n;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			cout<<s[num-1];
		}
		cout<<endl;
	}
	//cout<<endl;
return 0;
}