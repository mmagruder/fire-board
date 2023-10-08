
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL)); // seed the random number generator with the current time

    int secretNumber = rand() % 9 + 1; // generate a random number between 1 and 9

    int guess; // variable to store the user's guess

    // give the user two chances to guess the number
    for (int i = 0; i < 2; i++) {
        cout << "Guess a number between 1 and 9: ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << "You won a $5 gift card!\n";
            return 0; // exit the program
        }
        else {
            cout << "Sorry, that's not the number.\n";
        }
    }

    cout << "Sorry, you're out of guesses. The number was " << secretNumber << endl;
    return 0;
}