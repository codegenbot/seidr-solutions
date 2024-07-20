```cpp
#include <iostream>
#include <iomanip> 
using namespace std;

double snowDay(int hours, float initialSnow, float rate, float meltRate) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rate;
        snow -= meltRate * snow;
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rate, meltRate;
    cin >> initialSnow >> rate >> meltRate;
    cout << fixed << setiosflags(ios::fixed) << setprecision(6) << snowDay(hours, initialSnow, rate, meltRate) << endl;
    return 0;
}