#include<iostream>
using namespace std;
int main(){
    // int x = 4;
    // int y = 6;
    // int *p1 = &x;
    // int *p2 = &y;
    // cout<<*p1+*p2;

    //With Dereference Operator
    int x,y;
    int *p1 = &x;
    int *p2 = &y;
    cout<<"Enter first Number : ";
    cin>>*p1;
    cout<<"Enter second Number : ";
    cin>>*p2;
    cout<<*p1+*p2;

}
