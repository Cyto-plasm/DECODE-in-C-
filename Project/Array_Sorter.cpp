#include<iostream>
using namespace std;

//Function to sort array in Ascending Order
void bubbleSortAscending(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

//Function to sort array in Descending Order
void bubbleSortDescending(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] < arr[j+1]){
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

//Function to display array
void display(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[10];
    int n = 10;
    cout<<"Enter 10 integers: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int ascArr[10], desArr[10];
    for(int i = 0; i < n; i++){
        ascArr[i] = arr[i];
        desArr[i] = arr[i];
    }
    bubbleSortAscending(ascArr, n);
    bubbleSortDescending(desArr, n);

    cout<<"\nSorted in Ascending Order: ";
    display(ascArr, n);

    cout<<"\nSorted in Descending Order: ";
    display(desArr, n);

    return 0;
}