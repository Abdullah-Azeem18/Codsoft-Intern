//                                                           TASK : 1              
//                                                        (Guessing Game)


#include <iostream>
#include <cstdlib>          //for srand function
#include <ctime>              //for using current time

using namespace std;

int main() 
{

    srand((unsigned int)time(0)); // for random number generation
    int randomNumber = rand() % 100 + 1; // Generate random number between 1 and 100
    
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << "\n";

    do {
        cout << "Enter your guess (between 1 and 100): ";

        cin >> guess;
        attempts++;

        if (guess ==  randomNumber) {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts!" << "\n"<<"                        YOU WON";

        } else if (guess < randomNumber) {
            cout << "Too low! Try again." << "\n" ;

        } else {
            cout << "Too high! Try again." <<"\n" ;

        }

    } while (guess != randomNumber);

    return 0;
}
