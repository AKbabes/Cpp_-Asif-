#include<iostream>
#include<conio.h>
using namespace std;
int main(){
cout << "Enter the total Numbers - ";
int n,i,count=0;
cin >> n;
for(i=1;i<=n;i++){
    cin >> i;
    count+=i;
}
cout << "\nAverage of those numbers is = "<< count/n;
getchar();
return 0;
}
