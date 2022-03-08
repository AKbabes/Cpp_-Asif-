#include<iostream>
using namespace std;
int main(){
int num,vag100,mod100,vag50,mod50,vag20,mod20,vag10,mod10,vag5,mod5,vag2,mod2,vag1;
cin>>num;
vag100=num/100;
cout<<vag100<<" nota(s) de R$ 100,00\n";
mod100=num%100;
vag50=mod100/50;
cout<<vag50<<" nota(s) de R$ 50,00\n";
mod50=mod100%50;
vag20=mod50/20;
cout<<vag20<<" nota(s) de R$ 20,00\n";
mod20=mod50%20;
vag10=mod20/10;
cout<<vag10<<" nota(s) de R$ 10,00\n";
mod10=mod20%10;
vag5=mod10/5;
cout<<vag5<<" nota(s) de R$ 5,00\n";
mod5=mod10%5;
vag2=mod5/2;
cout<<vag2<<" nota(s) de R$ 2,00\n";
mod2=mod5%2;
vag1=mod2/1;
cout<<vag1<<" nota(s) de R$ 1,00\n";
cout<<endl;
return 0;
}
