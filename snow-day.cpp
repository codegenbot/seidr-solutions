#include <iostream>

using namespace std;

float calculateSnow(float hours, float snowOnGround, float snowFallRate, float meltRate) {
    float finalSnow = snowOnGround;
    for (int i = 0; i < hours; i++) {
        float snowFall = snowFallRate - meltRate;
        finalSnow = finalSnow + snowFall - meltRate;
    }
    if (finalSnow < 0) {
        finalSnow = 0;
    }
    return finalSnow;
}

int main() {
    float hours, snowOnGround, snowFallRate, meltRate;
    cin >> hours >> snowOnGround >> snowFallRate >> meltRate;

    float finalSnow = calculateSnow(hours, snowOnGround, snowFallRate, meltRate);
    cout << finalSnow << endl;

    return 0;
}