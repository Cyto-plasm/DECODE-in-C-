#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;// you need not to mention size
    //inserting / input do not use []
    v.push_back(6);
    // cout<<v.size()<<endl;
    v.push_back(1);
    // cout<<v.size()<<endl;
    // v[1] = 1;
    v.push_back(9);
    // cout<<v.size()<<endl;
    v.push_back(10);    
    // cout<<v.size()<<endl;

    //if you want to update / access
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<"  ";
    
}