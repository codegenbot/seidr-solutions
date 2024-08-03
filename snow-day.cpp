#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float rateOfFall, float meltingRate) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += rateOfFall;
        snow *= (1 - meltingRate);
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfFall, meltingRate;
    cin >> initialSnow >> rateOfFall >> meltingRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfFall, meltingRate);
    return 0;
}