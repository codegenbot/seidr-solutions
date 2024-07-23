```cpp
#include <iostream>
#include <iomanip>
using namespace std;

float snowDay(int hours, float onGround, float rate, float melt) {
    return onGround + (hours * rate - hours * melt);
}

int main() {
    int hours;
    cin >> hours;
    float onGround, rate, melt;
    cin >> onGround >> rate >> melt;
    cout << fixed << setprecision(10) << snowDay(hours, onGround, rate, melt) << endl;
    return 0;
}