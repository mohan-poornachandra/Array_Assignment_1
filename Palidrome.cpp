#include<iostream>
using namespace std;
int main()
{
    int n , arr[20];
    cout<<"Array Size :"<<endl; cin>>n;
    cout<<"Arra Elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int pal=1;
    for(int i=0;i<n/2;i++)
    {
        if(arr[i]!=arr[n-1-i]) pal=0;
    }
    if(pal ) cout<<"It is a Palidrome "<<endl;
    else cout<<"It is not a palidrome"<<endl;
}