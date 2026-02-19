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
    cout<<"Enter the element you want to search: ";
    cin>>x;

    //search
    // check work
    bool flag = false; //false -> not present
    for (int i = 0; i <= n-1; i++)
    {
        if(arr[i]==x)  flag = true;
    }
    if(flag==true) cout<<"element found";
    else cout<<"element not found";
 
}