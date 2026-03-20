#include<iostream>
using namespace std;
int main() {
    char choice;
    float num1, num2, result;
    
    cout << "=== Simple Calculator ===" << endl;
    cout << "Enter 'q' to quit." << endl;
    
    while(true) {
        cout << "\nEnter operator (+, -, *, /): ";
        cin >> choice;
        
        if(choice == 'q') break;
        
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        
        switch(choice) {
            case '+': 
                result = num1 + num2;
                cout << num1 << " + " << num2 << " = " << result << endl;
                break;
            case '-': 
                result = num1 - num2;
                cout << num1 << " - " << num2 << " = " << result << endl;
                break;
            case '*': 
                result = num1 * num2;
                cout << num1 << " * " << num2 << " = " << result << endl;
                break;
            case '/':
                if(num2 != 0) {
                    result = num1 / num2;
                    cout << num1 << " / " << num2 << " = " << result << endl;
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
            default: 
                cout << "Invalid operator!" << endl;
        }
    }
    
    // Array Extension
    cout << "\n=== Array Calculator (s=sum, p=product) ===" << endl;
    cout << "Enter 'q' to quit: ";
    cin >> choice;
    
    if(choice != 'q') {
        int size;
        cout << "Enter array size (max 10): ";
        cin >> size;
        float arr[10];
        
        cout << "Enter " << size << " numbers: " << endl;
        for(int i = 0; i < size; i++) {
            cout << "Number " << i+1 << ": ";
            cin >> arr[i];
        }
        
        switch(choice) {
            case 's': {
                result = 0;
                for(int i = 0; i < size; i++) {
                    result += arr[i];
                }
                cout << "Sum = " << result << endl;
                break;
            }
            case 'p': {
                result = 1;
                for(int i = 0; i < size; i++) {
                    result *= arr[i];
                }
                cout << "Product = " << result << endl;
                break;
            }
            default:
                cout << "Invalid choice!" << endl;
        }
    }
    
    cout << "Thanks for using calculator!" << endl;
    return 0;
}
    