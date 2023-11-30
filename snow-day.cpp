#include <iostream>

using namespace std;

float calculateSnow(float hours, float snowOnGround, float snowFallRate, float meltRate) {
    for (int i = 0; i < hours; i++) {
        float snowFall = snowFallRate - meltRate * snowOnGround;
        snowOnGround = snowFall > 0 ? snowOnGround + snowFall : 0;
    }
    return snowOnGround;
}

int main() {
    float hours, snowOnGround, snowFallRate, meltRate;
    cin >> hours >> snowOnGround >> snowFallRate >> meltRate;

    float finalSnow = calculateSnow(hours, snowOnGround, snowFallRate, meltRate);
    cout << finalSnow << endl;

    return 0;
}