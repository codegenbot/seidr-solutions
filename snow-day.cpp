```cpp
#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rate, float melt) {
    return (groundSnow + rate * hours - melt * hours);
}

int main() {
    int h;
    cin >> h;
    if (!(cin >> g >> r >> m)) {
        cout << "Invalid input. Please enter correct values." << endl;
        return 1; // Return an error code
    }
    cout << fixed << setprecision(10) << snowDay(h, g, r, m) << endl;
    return 0;
}