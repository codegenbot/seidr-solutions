#include <iostream>
using namespace std;

float calculateSnowAmount(int hours, float initialSnow, float snowFallRate, float meltingRate) {
    float snowOnGround = initialSnow;
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * meltingRate;
    }
    return snowOnGround;
}

int main() {
    int hours;
    float initialSnow, snowFallRate, meltingRate;
    cin >> hours >> initialSnow >> snowFallRate >> meltingRate;
    float finalSnow = calculateSnowAmount(hours, initialSnow, snowFallRate, meltingRate);
    cout << finalSnow << endl;
    return 0;
}