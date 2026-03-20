#include <iostream>
#include <cstdlib>  // for rand()
#include <ctime>    // for time()
using namespace std;

int main() {
    srand(time(0));  // Seed once for random numbers
    int secret = 1 + rand() % 100;  // Random 1-100

    // Game loop input
    int guess, attempts = 0;
    cout<<"Guess a number between 1-100!: "<<endl;
    do
    {
        cout<<"Enter guess: ";
        cin >> guess;
        attempts++;
        
        //Hints with Conditionals
        if(attempts > 7){
            cout<<"You reached your limit. Better luck next time"<<endl;;
            break;
        }
        if(guess == secret){
            cout<<"Correct! You got it in "<<attempts<<" attempts."<<endl;
        } else if(guess < secret){
            cout<<"Too low! Try higher. " << endl;
        }
        else {
            cout<<"Too high! Try lower. " << endl;
        }
    } while (guess != secret);
    cout<<"The number was "<< secret <<endl;
    return 0;
    
}