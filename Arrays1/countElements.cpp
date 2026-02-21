#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for (int i = 0; i <= n-1; i++)
    {
        cin>>arr[i];
    }

    int x;
    cout<<"Enter a number to count: ";
    cin>>x;

    int count = 0;
    for (int i = 0; i <= n-1; i++)
    {
        if(arr[i]>x) count ++;
    }
    cout<<count;
 
}