#include<iostream>
#include<climits>
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
    int max = INT_MIN;
    for (int i = 0; i <= n-1; i++)
    {
        if(max < arr[i]) max = arr[i];
    }
    int second_MAX = INT_MIN;
    for (int i = 0; i <= n-1; i++)
    {
        if(arr[i] != max && second_MAX < arr[i]) second_MAX = arr[i];
    }

    cout<<"Largest element is: "<<max<<endl;
    cout<<"Second Largest element is: "<<second_MAX;
    
}