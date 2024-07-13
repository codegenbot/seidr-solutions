#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float snowFallRate, float meltingRate) {
    return round(initialSnow + (hours * snowFallRate - hours * meltingRate));
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowFallRate, meltingRate;
    cin >> initialSnow >> snowFallRate >> meltingRate;

    cout << fixed << setprecision(6) << snowDay(hours, initialSnow, snowFallRate, meltingRate) << endl;

    return 0;
}