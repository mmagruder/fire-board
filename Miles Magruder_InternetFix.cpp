// Miles Magruder
// 1329585
// Project 4

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Start of program
    ofstream myfile("Internet_Fix.txt"); // create a file object to write the conversation

    bool problem_fixed = false;
    char answer;

    // Variable definition
    string router_location;
    bool cables_firmly_plugged;

    // Reboot the computer and try to reconnect
    cout << "Step 1: Reboot the computer and try to reconnect." << endl;
    myfile << "Step 1: Reboot the computer and try to reconnect." << endl;

    cout << "Did that fix the problem? (y/n) ";
    cin >> answer;
    myfile << "Did that fix the problem? (y/n) " << answer << endl;

    if (answer == 'y') {
        problem_fixed = true;
    }
    else {
        // Reboot the computer and try to connect again
        cout << "Step 2: Reboot the computer and try to connect again." << endl;
        myfile << "Step 2: Reboot the computer and try to connect again." << endl;

        cout << "Did that fix the problem? (y/n) ";
        cin >> answer;
        myfile << "Did that fix the problem? (y/n) " << answer << endl;

        if (answer == 'y') {
            problem_fixed = true;
        }
        else {
            // Make sure the cables between the router and the modem are plugged in firmly
            cout << "Step 3: Make sure the cables between the router and the modem are plugged in firmly." << endl;
            myfile << "Step 3: Make sure the cables between the router and the modem are plugged in firmly." << endl;

            cout << "Are the cables plugged in firmly? (y/n) ";
            cin >> answer;
            myfile << "Are the cables plugged in firmly? (y/n) " << answer << endl;

            if (answer == 'y') {
                cables_firmly_plugged = true;
            }
            else {
                cables_firmly_plugged = false;
            }

            if (cables_firmly_plugged) {
                problem_fixed = true;
            }
            else {
                // Move the router to a new location and try to connect
                cout << "Step 4: Move the router to a new location and try to connect." << endl;
                myfile << "Step 4: Move the router to a new location and try to connect." << endl;

                cout << "Where did you move the router to? ";
                cin >> router_location;
                myfile << "Where did you move the router to? " << router_location << endl;

                cout << "Did that fix the problem? (y/n) ";
                cin >> answer;
                myfile << "Did that fix the problem? (y/n) " << answer << endl;

                if (answer == 'y') {
                    problem_fixed = true;
                }
                else {
                    // Get a new router
                    cout << "Step 5: Get a new router." << endl;
                    myfile << "Step 5: Get a new router." << endl;
                }
            }
        }
    }

    // End of program
    if (problem_fixed) {
        cout << "Problem fixed!" << endl;
        myfile << "Problem fixed!" << endl;
    }
    else {
        cout << "Sorry, we couldn't fix the problem." << endl;
        myfile << "Sorry, we couldn't fix the problem." << endl;
    }

    myfile.close(); // close the file object to save the conversation
    return 0;
}

