#include <iostream>
using namespace std;

float calculateSnow(int hours, float initialSnow, float snowFallRate, float meltingRate) {
    float snowOnGround = initialSnow;
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= meltingRate;
    }
    return snowOnGround;
}

int main() {
    int hours;
    float initialSnow, snowFallRate, meltingRate;

    cin >> hours >> initialSnow >> snowFallRate >> meltingRate;

    float finalSnow = calculateSnow(hours, initialSnow, snowFallRate, meltingRate);
    cout << finalSnow << endl;

    return 0;
}