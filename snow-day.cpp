```cpp
#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rate, float melt) {
    return (groundSnow + rate * hours - melt * hours);
}

int main() {
    int h;
    cin >> h;
    
    float g, r, m;
    cin >> g;
    cout << " ";  // Add a space for better readability
    cin >> r;
    cout << "\n";  // Add a new line to separate inputs
    cin >> m;

    cout << fixed << setprecision(6);
    cout << snowDay(h, g, r, m) << endl;
    return 0;
}