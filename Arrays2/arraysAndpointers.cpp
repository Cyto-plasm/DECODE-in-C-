#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,6,2,8,3};
    int *ptr = &arr[0]; //giving address
    cout<<ptr<<endl;
    ptr[0] = 10;
    for(int i = 0; i<=4; i++){
        cout<<ptr[i]<<" ";
    }

}
