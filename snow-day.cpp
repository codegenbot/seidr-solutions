```cpp
#include <iostream>
using namespace std;

float snowDay(int hours, float onGround, float rate, float melt) {
    for (int i = 0; i < hours; i++) {
        onGround += rate - melt;
    }
    return onGround;
}

int main() {
    int hours;
    cin >> hours;
    float onGround, rate, melt;
    cin >> onGround >> rate >> melt;
    cout << snowDay(hours, onGround, rate, melt) << endl;
    return 0;
}