#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int num,n;
cin>>num;
for(int i=1;i<=num;i++){
    cin>>n;
    if(n>89 && n<=100)
        cout<<"student "<<i<<": A+"<<endl;
    else if(n<90 && n>=80)
        cout<<"student "<<i<<": A"<<endl;
    else if(n<80 && n>=70)
        cout<<"student "<<i<<": A-"<<endl;
    else if(n<70 && n>=60)
        cout<<"student "<<i<<": B+"<<endl;
    else if(n<60 && n>=50)
        cout<<"student "<<i<<": B-"<<endl;
    else if(n<50 && n>=40)
        cout<<"student "<<i<<": C"<<endl;
    else if(n<40 && n>=35)
        cout<<"student "<<i<<": D"<<endl;
    else if(n<35 && n>=0)
        cout<<"student "<<i<<": F"<<endl;
        getchar();
}
return 0;
}
