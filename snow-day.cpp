#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float snowfallRate, float meltingRate) {
    return initialSnow + (snowfallRate * hours) - (meltingRate * hours);
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowfallRate, meltingRate;
    cin >> initialSnow >> snowfallRate >> meltingRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, snowfallRate, meltingRate) << endl;
    return 0;
}