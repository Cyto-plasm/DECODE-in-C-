#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,6,2,8,3};
    int *ptr = arr; //giving address 
    for(int i = 0; i<=4; i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr; //ptr is pointing to 1st element

    
    *ptr = 10; //ptr[0] = 10
    ptr++; //ptr is pointing to 2nd element
    *ptr = 15;
    ptr--; //ptr is pointing to 1st element
    cout<<endl;

    for(int i = 0; i<=4; i++){
        cout<<*ptr <<" ";
        ptr++;
    }
    ptr = arr; //ptr is pointing to 1st element
     
}
