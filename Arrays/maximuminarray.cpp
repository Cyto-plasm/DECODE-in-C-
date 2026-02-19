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
    int max = arr[0];
    for (int i = 0; i <= n-1; i++)
    {
        if(max < arr[i]) max = arr[i];
    }
    cout<<max;
    
}