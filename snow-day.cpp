#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rate, float melt) {
    return (groundSnow + rate * hours - melt * hours);
}

int main() {
    int h;
    while (!(cin >> h)) {
        cout << "Invalid input. Please enter a valid integer for the number of hours." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> h;
    }
    float g, r, m;
    while (!(cin >> g) || !(cin >> r) || !(cin >> m)) {
        cout << "Invalid input. Please enter valid floating point numbers for the ground snow, rate of snow fall, and proportion of melting per hour." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> g >> r >> m;
    }
    cout << fixed << setprecision(10) << snowDay(h, g, r, m) << endl;
    return 0;
}