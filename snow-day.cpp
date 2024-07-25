#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float rateOfSnowFall, float meltingRate) {
    return initialSnow + (rateOfSnowFall * hours) - (meltingRate * hours);
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, rateOfSnowFall, meltingRate;
    cin >> initialSnow >> rateOfSnowFall >> meltingRate;
    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, rateOfSnowFall, meltingRate);
    return 0;
}