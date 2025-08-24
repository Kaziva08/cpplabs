#include <iostream>
using namespace std;
class car {
    private:
        string color;
        string engine;
        string fuel;
    public:
        car(string c, string e, string f) : color(c), engine(e), fuel(f) {}
        void display() {
            cout << "Car Details:" << endl;
            cout << "Color: " << color << endl;
            cout << "Engine: " << engine << endl;
            cout << "Fuel: " << fuel << endl;
        }
        void turnLeft() {
            cout << "The car is turning left." << endl;
        }
        void turnRight() {
            cout << "The car is turning right." << endl;
        }

};
int main() {
    string color, engine, fuel;
    cout << "Enter car color: ";
    cin >> color;
    cout << "Enter car engine type: ";
    cin >> engine;
    cout << "Enter car fuel type: ";
    cin >> fuel;

    car myCar(color, engine, fuel);
    myCar.display();

    char direction;
    cout << "Enter direction to turn (L for left, R for right): ";
    cin >> direction;

    if (direction == 'L' || direction == 'l') {
        myCar.turnLeft();
    } else if (direction == 'R' || direction == 'r') {
        myCar.turnRight();
    } else {
        cout << "Invalid direction!" << endl;
    }

    return 0;
}