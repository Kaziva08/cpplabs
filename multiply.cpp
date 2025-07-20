#include <iostream>
using namespace std;

int multiply(int x, int y) {
    return x * y;
}

void greetUser(string name) {
    cout << "Hello, " << name << "Nice to meet you!" << endl;
}

int main() {
    string name;
    int x, y;

    cout << "Hello!" << endl;
    cout << "What's your name? ";
    cin >> name;
    greetUser(name);

    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;

    cout << "The product is: " << multiply(x, y) << endl;

    return 0;
}

