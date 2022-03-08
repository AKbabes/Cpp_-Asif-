#include <iostream>
using namespace std;

int main() {
	int i,x,temp;
	float num;
	cin>>x;
	for(i=1;i<=x;i++){
	    cin>>num;
	    int count=0;
	    do{
            num=num/2;
            count++;
	    }while(num>1);
    cout<<count<<endl;
	}
	return 0;
}

