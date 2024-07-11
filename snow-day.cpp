#include <iostream>
using namespace std;

double snowDay(int hours, float initialSnow, float snowFallRate, float meltingRate) {
    double snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += snowFallRate;
        snow -= meltingRate * snow;
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowFallRate, meltingRate;
    cin >> initialSnow >> snowFallRate >> meltingRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, snowFallRate, meltingRate) << endl;
    return 0;
}