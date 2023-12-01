#include <iostream>
using namespace std;

float getSnowAfterHours(int hours, float initialSnow, float snowFallRate, float meltingRate) {
    float snow = initialSnow;
    for (int i = 0; i < hours; i++) {
        snow += snowFallRate;
        snow -= snow * meltingRate;
    }
    return snow;
}

int main() {
    int hours;
    float initialSnow, snowFallRate, meltingRate;
    cin >> hours >> initialSnow >> snowFallRate >> meltingRate;
    cout << getSnowAfterHours(hours, initialSnow, snowFallRate, meltingRate) << endl;
    return 0;
}