```cpp
#include <iostream>
#include <iomanip>

float snowDay(int hours, float groundSnow, float rate, float melt) {
    for (int i = 0; i < hours; ++i) {
        groundSnow += rate;
        groundSnow -= melt;
    }
    return groundSnow;
}

int main() {
    int hours;
    cin >> hours;
    float groundSnow, rate, melt;
    cin >> groundSnow >> rate >> melt;
    cout << std::fixed << std::setprecision(10) << snowDay(hours, groundSnow, rate, melt) << std::endl;
    return 0;
}