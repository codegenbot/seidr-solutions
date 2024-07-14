#include <iostream>
using namespace std;

float snowDay(int hours, float initialSnow, float snowFallRate, float meltingRate) {
    float totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFallRate;
        if (meltingRate > 0.0f) {
            totalSnow -= min(totalSnow, meltingRate);
        }
    }
    return totalSnow;
}

int main() {
    int hours;
    cin >> hours;
    float initialSnow, snowFallRate, meltingRate;
    cin >> initialSnow >> snowFallRate >> meltingRate;

    cout << fixed << setprecision(10) << snowDay(hours, initialSnow, snowFallRate, meltingRate) << endl;
    
    return 0;
}