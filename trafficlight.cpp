#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum TrafficLight {
    RED = 1,
    YELLOW = 2,
    GREEN = 3
};

int main() {
    srand(time(0));
    int choice = rand() % 3 + 1;

    cout << "Traffic Light " << endl;

    switch (choice) {
        case RED:
            cout << "Red Light: STOP" << endl;
            break;
        case YELLOW:
            cout << "Yellow Light: Wait" << endl;
            break;
        case GREEN:
            cout << "Green Light: GO" << endl;
            break;
    }

    return 0;
}


