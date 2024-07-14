#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfFall, float meltingRate) {
    float totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += rateOfFall;
        totalSnow *= (1 - meltingRate);
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfFall, meltingRate;
    cin >> initialSnow >> rateOfFall >> meltingRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfFall, meltingRate);
    return 0;
}