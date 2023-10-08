// Miles Magruder
// 1329585
// Quiz 7

#include <iostream>
using namespace std;

int main() {
    // Prompt the user to enter the temperature in Celsius
    double celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Define the freezing and boiling points for each substance in Celsius
    double ethyl_freeze = -173;
    double ethyl_boil = 172;
    double mercury_freeze = -38;
    double mercury_boil = 676;
    double oxygen_freeze = -362;
    double oxygen_boil = -306;
    double water_freeze = 32;
    double water_boil = 212;

    // Convert the temperature to Fahrenheit for display purposes
    double fahrenheit = celsius * 1.8 + 32;

    // Check which substances will freeze and boil at the given temperature
    cout << "At " << celsius << "°C (" << fahrenheit << "°F):" << endl;
    if (celsius <= ethyl_freeze) {
        cout << "- Ethyl alcohol will freeze." << endl;
    }
    if (celsius >= ethyl_boil) {
        cout << "- Ethyl alcohol will boil." << \n;
    }
    if (celsius <= mercury_freeze) {
        cout << "- Mercury will freeze." << endl;
    }
    if (celsius >= mercury_boil) {
        cout << "- Mercury will boil." << endl;
    }
    if (celsius <= oxygen_freeze) {
        cout << "- Oxygen will freeze." << endl;
    }
    if (celsius >= oxygen_boil) {
        cout << "- Oxygen will boil." << endl;
    }
    if (celsius <= water_freeze) {
        cout << "- Water will freeze." << endl;
    }
    if (celsius >= water_boil) {
        cout << "- Water will boil." << endl;
    }

    return 0;
}
