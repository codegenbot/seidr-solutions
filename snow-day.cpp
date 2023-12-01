#include <iostream>
#include <iomanip>
using namespace std;

float calculateSnowAmount(int hours, float initialSnow, float snowFallRate, float meltingRate) {
    float snowAmount = initialSnow;
    for (int i = 0; i < hours; i++) {
        snowAmount += snowFallRate;
        snowAmount -= snowAmount * meltingRate;
        snowAmount = round(snowAmount * 10000000000) / 10000000000;
    }
    return snowAmount;
}

int main() {
    int hours;
    float initialSnow, snowFallRate, meltingRate;
    cin >> hours >> initialSnow >> snowFallRate >> meltingRate;
    float finalSnowAmount = calculateSnowAmount(hours, initialSnow, snowFallRate, meltingRate);
    cout << setprecision(10) << finalSnowAmount << endl;
    return 0;
}