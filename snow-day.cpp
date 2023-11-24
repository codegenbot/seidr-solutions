#include <iostream>
using namespace std;

float calculateSnowAmount(int hours, float initialSnow, float snowFallRate, float meltingRate) {
    float snowAmount = initialSnow;
    for (int i = 0; i < hours; i++) {
        snowAmount += snowFallRate;
        snowAmount *= (1 - meltingRate);
    }
    return snowAmount;
}

int main() {
    int hours;
    float initialSnow, snowFallRate, meltingRate;
    cin >> hours >> initialSnow >> snowFallRate >> meltingRate;
    
    float finalSnowAmount = calculateSnowAmount(hours, initialSnow, snowFallRate, meltingRate);
    cout << finalSnowAmount << endl;

    return 0;
}