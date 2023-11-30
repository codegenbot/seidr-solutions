#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float snowfallRate, float meltingRate) {
    float snowOnGround = initialSnow;
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowfallRate;
        snowOnGround -= (snowOnGround * meltingRate) * (1 - (snowOnGround * meltingRate));
    }
    return snowOnGround;
}

int main() {
    float hours, initialSnow, snowfallRate, meltingRate;
    cin >> hours >> initialSnow >> snowfallRate >> meltingRate;
    cout << calculateSnow(hours, initialSnow, snowfallRate, meltingRate) << endl;
    return 0;
}