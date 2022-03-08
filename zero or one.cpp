#include<iostream>
using namespace std;
int main(){
int a,b,c;
while(cin>>a>>b>>c){
    if((a==1 && b==0 && c==0)||(a==0 && b==1 && c==1))
        cout<<"A\n";
    if((a==1 && b==0 && c==1)||(a==0 && b==1 && c==0))
        cout<<"B\n";
    if((a==1 && b==1 && c==0)||(a==0 && b==0 && c==1))
        cout<<"C\n";
    if((a==1 && b==1 && c==1)||(a==0 && b==0 && c==0))
        cout<<"*\n";
}
return 0;
}
