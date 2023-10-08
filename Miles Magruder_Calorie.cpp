// Miles Magruder
// 1329585

#include <iostream>
using namespace std;
int main()
{
    int numCookies;
    int calories;

    cout << "How many cookies did you eat? ";
    cin >> numCookies;

    calories = numCookies * (300 / 10);

    cout << "You consumed " << calories << " calories from the cookies.\n";
    
    return 0;
}

