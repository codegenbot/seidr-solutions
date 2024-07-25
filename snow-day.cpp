#include <iostream>
using namespace std;

float snowDay(int hours, float groundSnow, float rate, float meltRate) {
    float snow = groundSnow;
    for (int i = 0; i < hours; i++) {
        snow += rate;
        if (snow > 10000.0) { // assume more than 10,000 inches of snow is impossible
            snow = 10000.0;
        }
        snow *= (1 - meltRate);
    }
    return snow;
}

int main() {
    int hours;
    float groundSnow, rate, meltRate;

    cin >> hours >> groundSnow >> rate >> meltRate;

    cout << fixed << setprecision(10) << snowDay(hours, groundSnow, rate, meltRate);

    return 0;
}