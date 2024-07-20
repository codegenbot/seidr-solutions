```cpp
#include <iostream>
#include <iomanip>

int snowDay(int hours, float initialSnow, float rateOfFall, float meltRate) {
    int totalSnow = static_cast<int>(initialSnow + rateOfFall * hours - meltRate * hours);
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfFall, meltRate;
    cin >> initialSnow >> rateOfFall >> meltRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfFall, meltRate) << endl;
    return 0;
}