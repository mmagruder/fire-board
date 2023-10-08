#include <iostream>
#include <string>
using namespace std;
int main() 

{
    double sum = 0.0;
    int count = 0;
    string input;

    cout << "Enter a number, or = to see the result: ";
    cin >> input;

    while (input != "=") {
        double num = std::stod(input);
        sum += num;
        count++;

        cout << "Enter another number, or = to see the result: ";
        cin >> input;
    }

    double average = sum / count;

    cout << "The sum of your inputs is: " << sum << std::endl;
    cout << "The average of your inputs is: " << average << std::endl;

    return 0;
}

