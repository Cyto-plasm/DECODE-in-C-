#include<iostream>
using namespace std;
// int fact(int n){
//     int fact = 1;
//     for(int i = 2; i<=n; i++){
//         fact *=i;
//     }
//     return fact;
// }
int main(){
    int x;
    x = 4;
    int* p = &x;
    cout<<&x <<endl;
    cout<<p;
}