#include<iostream>
using namespace std;
int main(){
    int marks[10][3]; // 5 students 3 subjects 
    cout<<"Enter the marks of 5 students (3 subjects each): "<<endl;
    for(int i = 0; i < 5; i++){
        cout<<"Students "<< i + 1<< ":"<< endl;
        for(int j = 0; j < 3; j++){
            cout<<"Subject "<< j + 1 <<": ";
            cin >> marks[i][j];
        }
    }

    float averages[5];
    for(int i = 0; i < 5; i++){
        int total = 0;
        for(int j = 0; j < 3; j++){
            total += marks[i][j];
        }
        averages[i] = total/3.0; //Use 3.0 for float divison
    }

    //Track max/min across averages array with a simple loop and conditionals
    float highest = averages[0];
    float lowest = averages[0];
    for(int i = 0; i < 5; i++){
        if(averages[i] > highest) highest = averages[i];
        if(averages[i] < lowest) lowest = averages[i];
    }

    //Display all marks, averages, highest, and lowest
    cout<<"\nAverages: "<<endl;
    for(int i = 0; i < 5; i++){
        cout<<"Student "<<i+1<<" : "<<averages[i]<<endl;
    }
    cout<<"Highest Average: "<< highest << endl;
    cout<<"Lowest Average: "<< lowest << endl;
    return 0;
}