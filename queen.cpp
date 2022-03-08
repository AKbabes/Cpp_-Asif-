#include <iostream>
using namespace std;

int main() {
	int x1,y1,x2,y2,x,y;
	while(1){
	    cin>>x1>>y1>>x2>>y2;
	    if(x1==0 && x2==0 && y1==0 && y2==0){
	        break;
	    }
	    else if((x1==x2) && (y1==y2))
	        cout<<"0\n";
	    else if(((x1 == x2)&&(y1 != y2))||((x1 != x2)&&(y1 == y2)))
	        cout<<"1\n";
	    else{
            x=abs(x1-x2);
            y=abs(y1-y2);

	        if((x-y)==0)
	            cout<<"1\n";
            else
                cout<<"2\n";
	    }
	}
	return 0;
}
