#include<iostream>
using namespace std;
enum Color { RED, GREEN, BLUE };
int main() {
    Color myColor = GREEN;
    switch (myColor) {
        case RED:
            cout << "Color is Red";
            break;
        case GREEN:
            cout << "Color is Green";
            break;
        case BLUE:
            cout << "Color is Blue";
            break;
        default:
            cout << "Unknown Color";
    }
    return 0;
}