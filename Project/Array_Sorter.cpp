#include<iostream>
using namespace std;

//Function to sort array in Ascending Order
int bubbleSortAscending(int arr[], int n){
    int swaps = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j + 1]);
                swaps++;
            }
        }
    }
    return swaps;
}

//Function to sort array in Descending Order
int bubbleSortDescending(int arr[], int n){
    int swaps = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] < arr[j+1]){
                swap(arr[j], arr[j+1]);
                swaps++;
            }
        }
    }
    return swaps;
}

//Function to display array
void display(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n , choice;
    cout << "Enter how many numbers you want to sort: ";
    cin >> n;
    int arr[n];

    cout << "Enter "<< n <<" Integers: ";

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    cout << "\n--------- Sorting Menu ---------\n";
    cout << "1. Sort in Ascending Order\n";
    cout << "2. Sort in Descending Order\n";
    cout << "--------------------------------\n";
    cout << "Enter Choice: ";
    cin >> choice;
    int swaps = 0;
    switch (choice){
        case 1:
        swaps = bubbleSortAscending(arr, n);
        cout << "\nSorted in Ascending Order: ";
        display(arr, n);
        break;

        case 2:
        swaps = bubbleSortDescending(arr, n);
        cout << "\n Sorted in Descending Order: ";
        display(arr, n);
        break;
        default:
        cout << "Invalid Choice!";
        return 0;
    }
    cout << "\nNumber of swaps performed: " << swaps << endl;
    cout << "Best Case   : O(n)\n";
    cout << "Average Case: O(n^2)\n";
    cout << "Worst Case  : O(n^2)\n";
    return 0;
}