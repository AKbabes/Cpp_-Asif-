#include<iostream>
using namespace std;
int main(){
int n,i,count=0;
cin>>n;
int arr[n];
int kthpos;
cin>>kthpos;
for(i=0;i<n;i++){
    cin>>arr[i];
}
for(i=0;i<n;i++){
//        if(arr[0]==0){
//            cout<<0;
//            return 0;
//        }
    if(arr[i]>0 && arr[i]>=arr[kthpos-1]){
        count++;
    }
}
cout<<count<<endl;
}
