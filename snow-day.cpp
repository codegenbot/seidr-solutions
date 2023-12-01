#include <iostream>
using namespace std;

float calculateSnow(float hours, float initialSnow, float snowFallRate, float meltingRate) {
    float snowOnGround = initialSnow;
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate; // adding snow
        snowOnGround *= (1 - meltingRate); // melting snow
    }
    return snowOnGround;
}

int main() {
    float hours, initialSnow, snowFallRate, meltingRate;
    cin >> hours >> initialSnow >> snowFallRate >> meltingRate;
    float snowOnGround = calculateSnow(hours, initialSnow, snowFallRate, meltingRate);
    cout << snowOnGround << endl;
    return 0;
}