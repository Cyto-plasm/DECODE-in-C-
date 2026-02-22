#include<iostream>
using namespace std;
void display(int *a, int size){
    for(int i = 0; i<=4; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int b[], int size){ //int *b
    b[0] = 100;
}
int main(){
    int arr[5] = {2,5,7,1,9};
    //accessing the elements of array in another function
    //updation pass by value / reference ?
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;

    display(arr,size);
    change(arr,size);
    display(arr,size);
}