#include<iostream>
using namespace std;
int main()
{
    string arr;
    int a;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        cin>>arr;
        int n=arr.length();
        if(n>10)
        {
            cout<<arr[0]<<(n-2)<<arr[n-1]<<endl;
        }
        else
        {
            cout<<arr<<endl;
        }
    }
    return 0;
}
