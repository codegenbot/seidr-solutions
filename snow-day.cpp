#include <iostream>
using namespace std;

float snowDay(int hours, float currentSnow, float snowFallRate, float meltingRate) {
    float totalSnow = 0;
    for (int i = 0; i < hours; i++) {
        if (i > 0) {
            currentSnow -= meltingRate * i;
        }
        currentSnow += snowFallRate;
    }
    return currentSnow;
}

int main() {
    int hours;
    cin >> hours;
    float currentSnow, snowFallRate, meltingRate;
    cin >> currentSnow >> snowFallRate >> meltingRate;
    cout << fixed << setprecision(10) << snowDay(hours, currentSnow, snowFallRate, meltingRate) << endl;
    return 0;
}