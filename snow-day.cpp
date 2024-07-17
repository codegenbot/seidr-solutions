#include <iostream>
using namespace std;

float calculateSnow(int hours, float initialSnow, float snowfallRate, float meltingRate) {
    float currentSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        currentSnow += snowfallRate - meltingRate * currentSnow;
    }
    return currentSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowfallRate, meltingRate;
    cin >> initialSnow >> snowfallRate >> meltingRate;
    cout << fixed << setprecision(10) << calculateSnow(hours, initialSnow, snowfallRate, meltingRate) << endl;
    return 0;
}