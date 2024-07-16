```cpp
#include <iostream>
#include <iomanip>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfFall, float meltPerHour) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfFall;
        totalSnow -= meltPerHour * totalSnow;
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfFall, meltPerHour;
    cin >> initialSnow >> rateOfFall >> meltPerHour;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfFall, meltPerHour);
    return 0;
}