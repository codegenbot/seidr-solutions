#include <iostream>
using namespace std;

double snowDay(int hours, float currentSnow, float snowFallRate, float meltingRate) {
    double snow = currentSnow;
    for (int i = 0; i < hours; i++) {
        snow += snowFallRate;
        snow -= meltingRate * snow;
    }
    return snow;
}

int main() {
    int hours;
    cin >> hours;
    float currentSnow, snowFallRate, meltingRate;
    cin >> currentSnow >> snowFallRate >> meltingRate;
    cout << fixed << setprecision(10) << snowDay(hours, currentSnow, snowFallRate, meltingRate) << endl;
    return 0;
}