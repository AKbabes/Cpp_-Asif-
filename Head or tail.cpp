#include<iostream>
using namespace std;
int main(){
int n,i;
while(cin>>n){
    if(n==0) break;
    int arr[n],marry=0,john=0;
    for(i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0) marry++;
        if(arr[i]==1) john++;
    }
    cout<<"Mary won "<<marry<<" times and John won "<<john<<" times\n";
}
return 0;
}
