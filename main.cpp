#include <iostream>
using namespace std;

int main() {

    string name;
    int currentStation;
    int destinationStation;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Welcome from New York City, " << name << "!\n" << "This is N train running through Manhattan!" << endl;
  

    cout << "=== N Train Manhattan Stops (Uptown to Downtown) ===\n";
    cout << "1. Lexington Av/59 St\n";
    cout << "2. 5Av/59 St\n";
    cout << "3. 57 St\n";
    cout << "4. 49 St\n";
    cout << "5. Times Sq-42 St\n";
    cout << "6. 34 St-Herald Sq\n";
    cout << "7. 28 St\n";
    cout << "8. 23 St\n";
    cout << "9. 14 St-Union Sq\n";
    cout << "10. 8 St-NYU\n";
    cout << "11. Prince St\n";
    cout << "12. Canal St\n";
    cout << "--------------------------------\n";
    
    // 1. Get and validate current station
    cout << "Enter your CURRENT station number (0-11): ";
    cin >> currentStation;

    while (currentStation < 0 || currentStation > 11) {
        cout << "Invalid station! Please enter a number between 0 and 11: ";
        cin >> currentStation;
    }

    // 2. Get and validate destination station
    cout << "Enter your DESTINATION station number (0-11): ";
    cin >> destinationStation;

    while (destinationStation < 0 || destinationStation > 11) {
        cout << "Invalid station! Please enter a number between 0 and 11: ";
        cin >> destinationStation;
    }

    // 3. Calculate stops (assuming traveling downtown from 0 to 11)
    if (destinationStation > currentStation) {
        int stopsNeeded = destinationStation - currentStation;
        cout << "\nYou need to ride " << stopsNeeded << " stop(s) to reach your destination.\n";
    } 
    else if (destinationStation < currentStation) {
        cout << "\nThat destination is behind you! This app currently calculates downtown trips (Lexington to Canal).\n";
    } 
    else {
        cout << "\nYou are already at your destination!\n";
    }

    return 0;
}
