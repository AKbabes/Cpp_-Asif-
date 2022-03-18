#include<iostream>
#include<math.h>
using namespace std;
int main(){
int w,h,s;
cin>>w>>h>>s;
long long heigt=ceil((float)h/s);
long long width=ceil((float)w/s);
cout<<(heigt*width)<<endl;
}
