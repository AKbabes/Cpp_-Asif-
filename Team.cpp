#include<iostream>
using namespace std;
int main(){
int num,count=0;
cin>>num;
int p,v,t;
for(int i=0;i<num;i++){
    cin>>p>>v>>t;
    if((p==1 && v==1 && t==1)||(p==1 && v==1 && t==0)||(p==1 && v==0 && t==1)||(p==0 && v==1 && t==1)){
        count++;
    }
}
cout<<count<<endl;
}
