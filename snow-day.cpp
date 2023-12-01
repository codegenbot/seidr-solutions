#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float snowFallRate, float meltingRate) {
    float snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += snowFallRate - (snow * (meltingRate / 100));
    }
    return snow;
}

int main() {
    float hours, initialSnow, snowFallRate, meltingRate;
    cin >> hours;
    cin >> initialSnow;
    cin >> snowFallRate;
    cin >> meltingRate;
    float finalSnow = calculateSnow(hours, initialSnow, snowFallRate, meltingRate);
    cout << finalSnow << endl;
    return 0;
}