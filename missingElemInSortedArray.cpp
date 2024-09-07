#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int diff = arr[0];
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]-i!=diff)
        {
            cout<<"Missing Element is :"<<i+diff<<endl;
            break;
        }
    }
}